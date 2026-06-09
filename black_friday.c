// 5. Na última Black Friday, o gerente de uma loja de perfumes colocou todo o seu estoque em promoção, de acordo com a tabela a seguir:
// Código    Condição de Pagamento    Desconto (%)
// 1     À vista (em espécie)     10
// 2    Cartão de débito    5
// 3    Cartão de crédito    3
// 4    PIX            7.5

// Construa um programa que solicite ao operador do caixa o preço total da venda, bem como a forma de pagamento.
// Ao fim, o programa deve informar o valor final a ser pago.
// Salvar o código como: black_friday.c

// 0- Criar as variaveis necessarias para o programa
// 1- perguntar preço total da venda
// 2- perguntar forma de pagamento
// 3- DE ACORDO COM A TABELA, aplicar um desconto percentual
#include <stdio.h>

int main()
{
    float valor_total, valor_desconto;
    int forma_pagto;

    printf("\nDigite o valor total da venda: ");
    scanf("%f", &valor_total);

    printf("\n** FORMA DE PAGAMENTO **");
    printf("\n1 - A VISTA");
    printf("\n2 - CARTAO DEBITO");
    printf("\n3 - CARTAO CREDITO");
    printf("\n4 - PIX");
    printf("\nDigite a opcao: ");
    scanf("%d", &forma_pagto);

    if (forma_pagto == 1) //A VISTA - 10%
    {
        valor_desconto = (valor_total / 100) * 10;
    }
    else if (forma_pagto == 2) // DEBITO - 5%
    {
        valor_desconto = (valor_total / 100) * 5;
    }
    else if (forma_pagto == 3) // CREDITO - 3%
    {
        valor_desconto = (valor_total / 100) * 3;
    }
    else if (forma_pagto == 4) // PIX - 7,5%
    {
        valor_desconto = (valor_total / 100) * 7.5;
    }
    else
    {
        printf("FORMA DE PAGAMENTO INVÁLIDA!");
    }

    valor_total = valor_total - valor_desconto;

    printf("O preço final do produto e de %.2f reais", valor_total);
}
