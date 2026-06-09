// EVOLUÇÃO DO PROGRAMA GRANDEZAS.C PARA UTILIZAR FUNÇÕES E FICAR MAIS LIMPO E ORGANIZADO
#include <stdio.h>
#include "lib_grandezas.h"

int main(){
    int opcao; 

    mostrarMenu();

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        calcularTensao();
        break;

        case 2:
        calcularResistencia();
        break;

        case 3:
        calcularCorrente();
        break;

        case 4:
        printf("\nFINALIZANDO PROGRAMA......");
        break;

        default:
        printf("\n***OPCAO INVALIDA***");
        break;
    }
}
