#include <stdio.h>

char tabuleiro_visivel[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int tabuleiro_logico[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int total_jogadas = 0;

void mostrar_tabuleiro()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %c  ", tabuleiro_visivel[i][j]);
        }

        printf("\n  --------------  \n");
    }
}

int atualiza_tabuleiros(int jogador, int jogada)
{
    int num = 0;
    char letra = 'N';

    if (jogador == 1)
    {
        num = 1;
        letra = 'X';
    };
    if (jogador == 2)
    {
        num = -1;
        letra = 'O';
    };

    if (jogada > 0 && jogada <= 9 && num != 0 && letra != 'N')
    {
        int linha = (jogada - 1) / 3;
        int coluna = (jogada - 1) % 3;

        if (tabuleiro_logico[linha][coluna] != 0)
        {
            printf("\n*** Jogada Invalida - Jogue Novamente ***\n");
            return 0;
        }
        tabuleiro_logico[linha][coluna] = num;
        tabuleiro_visivel[linha][coluna] = letra;

        if (jogador == 1)
        {
            return 2;
        }
        if (jogador == 2)
        {
            return 1;
        }

        return 1;
    }
    else
    {
        printf("\n*** Jogada Invalida - Jogue Novamente ***\n");
        ;
        return jogador;
    }
}

int verifica_vencedor()
{
    int vencedor = 0;
    int soma_linhas = 0;
    int soma_colunas = 0;
    int soma_diagonal1 = 0;
    int soma_diagonal2 = 0;

    // verificando as diagonais
    soma_diagonal1 = tabuleiro_logico[0][0] + tabuleiro_logico[1][1] + tabuleiro_logico[2][2];
    soma_diagonal2 = tabuleiro_logico[0][2] + tabuleiro_logico[1][1] + tabuleiro_logico[2][0];

    if (soma_diagonal1 == 3 || soma_diagonal1 == -3)
    {
        vencedor = soma_diagonal1 / 3;
    }

    if (soma_diagonal2 == 3 || soma_diagonal2 == -3)
    {
        vencedor = soma_diagonal2 / 3;
    }

    // verificando as linhas e colunas
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma_linhas += tabuleiro_logico[i][j];
            soma_colunas += tabuleiro_logico[j][i];

            if (soma_linhas == 3 || soma_linhas == -3)
            {
                vencedor = soma_linhas / 3;
                break;
            }

            if (soma_colunas == 3 || soma_colunas == -3)
            {
                vencedor = soma_colunas / 3;
                break;
            }
        }

        if (vencedor != 0)
        {
            break;
        }
        else
        {
            soma_linhas = 0;
            soma_colunas = 0;
        }
    }

    return vencedor;
}