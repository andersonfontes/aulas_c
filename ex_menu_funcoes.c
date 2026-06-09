#include <stdio.h>

//DECLARAÇÃO DA FUNÇÃO (CRIAÇÃO)
void mostrarMenu(){
    printf("*** SISTEMA DE CALCULO DE GRANDEZAS ***\n");
    printf("** MENU DE OPCOES **\n");
    printf("1 - Calcular TENSAO\n");
    printf("2 - Calcular RESISTENCIA\n");
    printf("3 - Calcular CORRENTE\n");
    printf("4 - SAIR\n");
}

// DESAFIO: IMPLEMENTE AS FUNCOES QUE FALTAM PARA O NOSSO PROGRAMA 
// RODAR : calcularTensao() , calcularResistencia(), calcularCorrente()

// *** CRIE SUAS FUNÇÕES AQUI ***
void calcularTensao(){
    float i,u,r;

    printf("\n** CALCULO DE TENSAO **\n");

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        u = r * i;

        printf("A TENSAO e de %.2f volts\n", u);
}

void calcularResistencia(){
    printf("\n** CALCULO DE RESISTENCIA **\n");
        float i,u,r;

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        r = u / i;

        printf("A RESISTENCA e de %.2f OHMS \n", r);
}

void calcularCorrente(){
    printf("\n** CALCULO DE CORRENTE **\n");

        float i,u,r;

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        i = u / r;
        printf("A CORRENTE e de %.2f amperes \n", i);
    }


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