//REVISÃO LOOPS
//LOOPS SERVEM PARA REPETIR UMA BLOCO DE INSTRUÇÕES

// EXISTEM 3 TIPOS: WHILE, FOR E DO...WHILE

// FOR irá repetir o codigo baseado em uma QUANTIDADE de vezes
// que vc quer repeti-lo. Ele é baseado em um numero e tem um 
// CONTADOR

#include <stdio.h>

int main(){
    // exemplo FOR: imprimir os numeros até 5
    for(int c = 0 ; c < 6 ; c++ ){
        printf( "\n %d", c);
    }


// O loop WHILE irá executar aquele bloco ENQUANTO uma dada condição for verdadeira. É como se tivesse um "if embutido".
// USE while quando quiser executar um bloco indefinidamente
// ATÉ QUE uma condição MUDE.

int bateria = 0;
int valor_carregado = 0;

while(bateria <= 100){  
    printf("\n** PROGRAMA DE CARGA DE BATERIA SOLAR **");
    printf("\nA bateria esta %d por cento carregada", bateria);
    printf("\nDigite quanto foi carregado hoje: ");
    scanf("%d", &valor_carregado);

    bateria = bateria + valor_carregado;
}

printf("\n\n ** PROGRAMA FINALIZADO. BATERIA EM 100%** ");



// DO...WHILE irá executar obrigatoriamente UMA VEZ o bloco de codigo ANTES DE CHECAR se a condição é verdadeira.
// Muito util quando voce quer mostrar um MENU, por exemplo

printf( "\n** PROGRAMA DE PALPITE PRA COPA DO MUNDO **\n" );

int contador_votos_portugal = 0;
int contador_votos_argentina = 0 ;
int contador_votos_brasil = 0;
int opcao;

do{
    printf("\n*** QUEM VOCE ACHAR QUE VAI GANHAR A COPA?***\n");
    printf("\n1 - PORTUGAL");
    printf("\n2 - ARGENTINA");
    printf("\n3 - BRASIL");
    printf("\n0 - ENCERRAR A VOTACAO\n");
    scanf("%d",&opcao);

    if(opcao == 1){ 
        contador_votos_portugal++;
    }

    if(opcao == 2){
        contador_votos_argentina++;
    }

    if(opcao == 3){
        contador_votos_brasil++;
    }

    if(opcao == 0){
        printf("***VOTACAO ENCERRADA***");
        break;
    }


}while(opcao != 0);

printf("\n\nVotos Portugal: %d", contador_votos_portugal);
printf("\nVotos Argentina: %d", contador_votos_argentina);
printf("\nVotos Brasil: %d", contador_votos_brasil);

}