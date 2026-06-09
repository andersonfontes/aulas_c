 #include <stdio.h>

// Voce pode passar informações para que a função
// realize uma tarefa, exemplo: voce passar
// 2 numeros para ela realizar a soma:
// vc passa estes parâmetros dentro dos parenteses

// declarando uma função que recebe 2 valores
void soma(int num1 , int num2){
    int total = num1 + num2;
    printf("\nO total da soma e: %d", total);
}

// FUNÇÕES COM RETORNO
// Ao invés de simplesmente mostrar na tela o resultado,
// a função pode "entregar" de um valor para o programa
// voce pode "capturar" este retorno, por exemplo, guardando
// ele em uma variável

// vamos fazer um conversor de bytes para bits
// sendo que 1 BYTE = 8 BITS

int converterParaBits(int valorEmBytes){
    int valorEmBits = valorEmBytes * 8;
    return valorEmBits;
}


int main(){
    soma(5,4); //chamando a função
    soma(1000,1500);
    soma(250,900);

    // exemplo utilizando valores inseridos pelo usuário do programa:
    int preco, frete;

    printf("\nDigite o preco do produto: ");
    scanf("%d", &preco);

    printf("\nDigite o valor do frete: ");
    scanf("%d", &frete);

    soma(preco,frete);

    printf("\n**** CONVERSOR DE BYTES PARA BITS ****");
    
    printf("\nDigite o valor em Bytes e vou converter para BITs");
    int entradaUsuario;
    scanf("%d", &entradaUsuario);

    int final;
    final = converterParaBits(entradaUsuario);
    
    printf("\n %d e o valor em BITS", final);
}




