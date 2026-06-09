// EVOLUÇÃO DO PROGRAMA GRANDEZAS.C PARA UTILIZAR FUNÇÕES E FICAR MAIS LIMPO E ORGANIZADO
#include <stdio.h>

void mostrarMenu(){
    printf("*** SISTEMA DE CALCULO DE GRANDEZAS ***\n");
    printf("** MENU DE OPCOES **\n");
    printf("1 - Calcular TENSAO\n");
    printf("2 - Calcular RESISTENCIA\n");
    printf("3 - Calcular CORRENTE\n");
    printf("4 - SAIR\n");
}

// DESAFIO: IMPLEMENTE AS FUNÇOES calcularTensao(),
// calcularResistencia() e  calcularCorrente()
// para o programa rodar igual ao original

void calcularTensao(){
    float u,r,i;
    printf("\n** CALCULO DE TENSAO **\n");

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        u = r * i;

        printf("A TENSAO é de %.2f volts\n", u);
}

void calcularResistencia(){
    float u,r,i;
    printf("\n** CALCULO DE RESISTENCIA **\n");

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        r = u / i;

        printf("A RESISTENCA é de %.2f OHMS \n", r);
}

void calcularCorrente(){
    float u,r,i;
    printf("\n** CALCULO DE CORRENTE **\n");

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        i = u / r;

        printf("A CORRENTE é de %.2f amperes \n", i);
}


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
        printf("\NFINALIZANDO PROGRAMA......");
        break;

        default:
        print("\n***OPCAO INVALIDA***");
        break;


    }


}
