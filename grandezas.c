// 4A. Uma empresa, que presta serviço à companhia de energia elétrica do estado, necessita de um programa que auxilie os seus eletricistas no cálculo das principais grandezas da Eletricidade
// que são Tensão, Resistência e Corrente. Sabe-se que:
// U = R * I,
// onde,
// U é a Tensão      (em V),
// R é a Resistência (em Ώ) e,
// I é a Corrente    (em A).

// Você foi contratado(a) pela empresa para atender a essa solicitação.
// Construa um programa que apresente o seguinte menu:

// ******************************
// CÁLCULO DE GRANDEZAS ELÉTRICAS
// ******************************
// 1. Tensão (em Volt)
// 2. Resistência (em Ohm)
// 3. Corrente (em Ampére)
// 4. Sair do programa
// ******************************
// Qual grandeza deseja calcular?

// Em seguida, o programa deve solicitar que o eletricista informe o valor das outras duas grandezas para realizar o cálculo.

// Quando o eletricista escolher:
// 1. Tensão, o programa deve solicitar que ele informe os valores da Resistência e da Corrente.
//    Utilizar a fórmula: U = R * I

// 2. Resistência, o programa deve solicitar que ele informe os valores da Tensão e da Corrente.
//    Utilizar a fórmula: R = U / I

// 3. Corrente, o programa deve solicitar que ele informe os valores da Tensão e da Resistência.
//    Utilizar a fórmula: I = U / R

// Por fim, o programa deve calcular e apresentar o valor encontrado para a grandeza escolhida.
// Obs.: Qualquer opção diferente das apresentadas no menu (1 a 4) deverão ser informadas ao usuário como 'Opção inválida!'
// Salvar o código como: grandezas.c

#include <stdio.h>

int main(){
    float u, r, i ; //tensao, resistencia, corrente
    int opcao;

    printf("*** SISTEMA DE CALCULO DE GRANDEZAS ***\n");
    printf("** MENU DE OPCOES **\n");
    printf("1 - Calcular TENSAO\n");
    printf("2 - Calcular RESISTENCIA\n");
    printf("3 - Calcular CORRENTE\n");
    printf("4 - SAIR\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("\n** CALCULO DE TENSAO **\n");

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        u = r * i;

        printf("A TENSAO é de %.2f volts\n", u);
    
        break;

        case 2:
        printf("\n** CALCULO DE RESISTENCIA **\n");

        printf("Digite a corrente: ");
        scanf("%f", &i);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        r = u / i;

        printf("A RESISTENCA é de %.2f OHMS \n", r);
        break;

        case 3:
        printf("\n** CALCULO DE CORRENTE **\n");

        printf("Digite a resistencia: ");
        scanf("%f", &r);

        printf("Digite a tensao: ");
        scanf("%f", &u);

        i = u / r;

        printf("A CORRENTE é de %.2f amperes \n", i);
        break;

        case 4:
        printf("Finalizando programa....");
        break;

        default:
        printf("OPCAO INVALIDA");
        break;
    }
}