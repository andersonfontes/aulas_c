#include <stdio.h>

int main(){

    int opcao;
    
    do{
        printf("*** SISTEMA DE CALCULO DE GRANDEZAS ***\n");
        printf("** MENU DE OPCOES **\n");
        printf("1 - Calcular TENSAO\n");
        printf("2 - Calcular RESISTENCIA\n");
        printf("3 - Calcular CORRENTE\n");
        printf("4 - SAIR\n");

        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("**** CALCULAR TENSAO ****");
            // TODO: IMPLEMENTAR CODIGO TENSÃO 
        }

        if(opcao == 2){
            printf("**** CALCULAR RESISTENCIA ****");
            // TODO: IMPLEMENTAR CODIGO RESISTENCIA 
        }

        if(opcao == 3){
            printf("**** CALCULAR CORRENTE ****");
            // TODO: IMPLEMENTAR CODIGO CORRENTE 
        }

        if(opcao == 4){
            //sair
            break;
        }
    } while(opcao != 0);

}