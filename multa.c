// 1. Desenvolva um programa que pergunte a velocidade do carro de um usuário.
// Se a velocidade ultrapassar 80km/h, exiba uma mensagem dizendo que o usuário foi multado.
// Nesse caso, exiba o valor da multa, cobrando R$ 50,00 por cada km acima de 80 km/h.
// Exemplo: Digite a velocidade em Km/h: 85
// Limite = 80Km/h
// Excedeu 5Km/h
// multa = 5Km/h * R$ 50,00
// Valor da multa: R$ 250,00
// Salvar o código como: multa.c

// 1- perguntar a velocidade
// 2- SE a velocidade ultrapassar o limite (80km/h),
// calcular a multa ( diferenca do limite X 50 reais), senão encerre o programa
// 3- calculo da multa: (velocidade - limite) * 50
// 4- mostrar informações para o usuario
#include <stdio.h>

int main()
{
    int velocidade;
    int max_permitido = 80;
    int diferenca_km;
    int multa;

    printf("Informe a velocidade do veiculo: ");
    scanf("%d", &velocidade);

    if (velocidade > max_permitido)
    {
        diferenca_km = velocidade - max_permitido;
        multa = diferenca_km * 50;

        printf("O seu veiculo ultrapassou o limite em %d km/h e foi multado!\n", diferenca_km);
        printf("A multa foi de R$ %d,00", multa);
    }
}