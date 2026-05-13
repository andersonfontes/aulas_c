#include <stdio.h>

void main()
{
    int tabuleiro[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("  %d  ", tabuleiro[0][0]);
    printf("  %d  ", tabuleiro[0][1]);
    printf("  %d  ", tabuleiro[0][2]);

    printf("\n  --------------  \n");

    printf("  %d  ", tabuleiro[1][0]);
    printf("  %d  ", tabuleiro[1][1]);
    printf("  %d  ", tabuleiro[1][2]);

    printf("\n  --------------  \n");

    printf("  %d  ", tabuleiro[2][0]);
    printf("  %d  ", tabuleiro[2][1]);
    printf("  %d  ", tabuleiro[2][2]);

    printf("\n --- usando for ---- \n\n");

    int x = 0;
    int y = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d  ", tabuleiro[i][j]);
        }

        printf("\n  --------------  \n");
    }
}