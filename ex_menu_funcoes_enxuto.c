#include <stdio.h>
#include "minhas_funcoes.h"

int main(){    
    int opcao;

    mostrarMenu(); //CHAMADA DE FUNÇÃO (USO)
    printf("Digite a opcao desejada: ");
    scanf("%d" , &opcao);

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
        printf("*** FINALIZANDO PROGRAMA ***");
        break;
    
    }

    
}