#include <stdio.h>

int main()
{
    char usuario[50];
    int senha; // Solicita os dados de acesso

    printf("Digite o usuário: ");
    scanf("%s", usuario);
    printf("Digite a senha: ");
    scanf("%d", &senha);

    // Verifica se o usuário é "atila" (letra por letra) e a senha é 12345
    if ((usuario[0] == 'a' && usuario[1] == 't' && usuario[2] == 'i' && usuario[3] == 'l' && usuario[4] == 'a' && usuario[5] == '\0' && senha == 12345)|| (usuario[0] == 'o' && usuario[1] == 'l' && usuario[2] == 'i' && usuario[3] == 'v' && usuario[4] == 'i' && usuario[5] == '\0' && senha == 54321)
    {
        printf("\nSeja bem vindo Atila!\n");
    }

    // Verifica se o usuário é "olivi" (letra por letra) e a senha é 54321
    else if 
    {
        printf("\nSeja bem vindo Olivi!\n");
    } // Se não for nenhum dos dois
    else
    {
        printf("\nUsuário e senha não conferem\n");
    }
    return 0;
}
