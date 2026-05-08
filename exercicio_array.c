#include <stdio.h>

void main(){
    int numeros[] = {77,66,55,44};

    printf("\n\n-- impressao um a um --\n");
    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[1]);
    printf("%d\n", numeros[2]);
    printf("%d\n", numeros[3]);

    printf("\n\n-- impressao com for --\n");
    for(int i = 0; i < 4 ; i++){
        printf("%d\n" , numeros[i]);
    }

    printf("\n\n-- impressao com while --\n");
    int j = 0;
    while(j < 4){
        printf("%d\n" , numeros[j]);
        j++;
    }

    printf("\n\n-- impressao com do..while --\n");
    int x = 0;
    do{
        printf("%d\n" , numeros[x]);
        x++;
    }while(x < 4);

    printf("\n\n-- impressao com for baseado no tamanho --\n");
    int tamanho = (int) (  sizeof(numeros) / sizeof(numeros[0])  ) ;

    printf("tamanho do array: %d\n", tamanho);

    for (int y = 0; y < tamanho ; y++){
        printf("%d\n", numeros[y]);
    }

}