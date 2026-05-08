#include <stdio.h>

void main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("numero par");
    }
    else{
        printf("numero impar");
    }
}