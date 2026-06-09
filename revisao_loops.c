#include <stdio.h>

int main()
{
    // use FOR quando quiser repetir um codigo uma determinada QUANTIDADE de vezes:

    printf("\n--- exemplo for ----\n");
    int i;

    for (i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    // use WHILE para criar um loop que irá executar as instruções indefinidamente ENQUANTO uma condição for verdadeira
    // detalhe: ele verifica a condição ANTES de executar pela primeira vez

    int x = 8;

    printf("\n--- exemplo while ----\n");
    while (x > 10)
    {
        printf("%d\n", x); // nao ira executar NENHUMA vez, pois a 1z checagem deu FALSO
    }

    // use o DO...WHILE quando quiser executar SEMPRE um código ANTES de fazer a primeira avaliação da condição de parada:
    printf("\n--- exemplo do..while ----\n");

    int opcao;

    do
    {
        printf("\ndigite 1 para continuar executando ou 0 para sair: ");
        scanf("%d", &opcao);
    } while (opcao != 0);
    
}