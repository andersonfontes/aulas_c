// 4B. Suponha que o professor Atila possua dois logins na rede do SENAI-SP.
// Construa um programa que valide o acesso do professor à rede.
// Caso o par usuário/senha informado esteja correto, o programa deve imprimir 
// a mensagem “Seja bem vindo!”.
// Caso contrário, “Usuário e senha não conferem”.
// Dados dos dois logins:
// login 1                   login 2
// usuário: atila        usuário: olivi
// senha: 12345        senha: 54321
//
// Salvar o código como: dois_logins.c

// 1- Criar variáveis para os logins e senhas
// 2- Pedir o login
// 3- Pedir a senha
// 4- se o PAR login/senha confere com algum dos dois usuarios: msg bem-vindo
// ; SENÃO, mensagem de login inválido
#include <stdio.h>
#include <string.h>

int main(){

    char login1[] = "atila"; // SHIFT + ALT + SETA P/ BAIXO
    char senha1[] = "12345";

    char login2[] = "olivi";
    char senha2[] = "54321";
    
    char login_user[20] = "";
    char senha_user[20] = "";

    printf("*** SISTEMA SENAI - LOGIN ****");
    printf("Digite o login: ");
    scanf("%s" , login_user);

    printf("Digite a senha: ");
    scanf("%s" , senha_user);

    if( (strcmp(login_user,login1)==0   && strcmp(senha_user,senha1)==0 ) || 
       (strcmp(login_user,login2)==0 &&strcmp(senha_user, senha2)==0)){
        printf("BEM-VINDO - LOGIN BEM-SUCEDIDO");
    }else{
        printf("LOGIN INVALIDO!");
    }   
}