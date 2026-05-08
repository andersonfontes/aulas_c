#include <stdio.h>
#include <math.h>

int main(){
    double resultado;
    for(int i = 15 ; i <= 200 ; i++){
        resultado = pow(i,2);
        printf( "%.0f \n"  , resultado);
    }
}