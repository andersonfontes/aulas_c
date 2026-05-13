#include <stdio.h>
#include "lib_jogo.h"

int main()
{
    printf("*** JOGO DA VELHA ***\n");

    char jogador1[50];
    char jogador2[50];

    printf("**** Digite o nome do Jogador 1: \n");
    scanf(" %s", jogador1);
    printf("\nJogador 1 cadastrado: \n", jogador1);
    printf("\n**** ATENCAO **** %s SERA O X **********\n\n", jogador1);

    printf("**** Digite o nome do Jogador 2: \n");
    scanf(" %s", jogador2);
    printf("\nJogador 2 cadastrado: %s\n", jogador2);
    printf("\n**** ATENCAO **** %s SERA O  CIRCULO ********** \n\n", jogador2);

    int vencedor = 0;
    int jogador = 1;

    do
    {
        mostrar_tabuleiro();

        int jogada = 0;

        printf("\n Jogada %d :", total_jogadas);
        printf("\n Jogador %d - digite o numero da casa onde deseja jogar:", jogador);
        scanf(" %d", &jogada);

        jogador = atualiza_tabuleiros(jogador, jogada);

        if (jogador == 0)
        {
            printf("\n\nReiniciando jogada......\n\n");
            continue;
        }

        vencedor = verifica_vencedor();
        
        //rotina pra verificar o empate caso acabem as casas
        total_jogadas++;

        if (total_jogadas == 9 && vencedor == 0)
        {
            vencedor = 3;
        }

        if (vencedor != 0)
        {
            break;
        }

    } while (vencedor == 0);

    mostrar_tabuleiro();

    printf("\n **** FIM DE JOGO *** ");

    if (vencedor == 1)
    {
        printf("O vencedor foi: %s", jogador1);
    }
    else if (vencedor == -1)
    {
        printf("O vencedor foi: %s", jogador2);
    }
    else if (vencedor == 3)
    {
        printf("EMPATE!!");
    }

    return 0;
}