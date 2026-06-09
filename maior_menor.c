// 2. Desenvolva um programa que leia três números e que imprima:
//    2.1. o maior,
//    2.2. o menor,
//    2.3. a soma,
//    2.4. a média.
// Exemplo:
// num1 = 5    num2 = 3    num3 = 10
// **********
// maior = 10
// menor = 3
// soma = 18
// media = 6
// Salvar o código como: maior_menor.c


#include <stdio.h>
int main(){

int num1, num2, num3;
int maior, menor, soma;
float media;    

// 1- perguntar os 3 numeros
printf("Digite o 1o. numero: ");
scanf(" %d", &num1);

printf("Digite o 2o. numero: ");
scanf(" %d", &num2);

printf("Digite o 3o. numero: ");
scanf(" %d", &num3);

// 2- descobrir o maior numero
maior = num1;

if(num2 > maior){
    maior = num2;
}

if(num3 > maior){
    maior = num3;
}




// 3- descobrir o menos numero
// 4- calcular a soma dos numeros
// 5- calculara a media dos numeros
// 6- mostrar as 4 informações


}