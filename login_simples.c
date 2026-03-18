/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação
Linguagem: C

Descrição: Programa que simula um sistema simples de autenticação. O usuário digita um nome e uma senha, e o sistema verifica se as credenciais correspondem às cadastradas.

Observação: A verificação do nome é feita caractere por caractere.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Configura o idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    char nome[50];
    int senha;

    // Entrada de dados
    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite sua senha de 4 digitos:\n");
    scanf("%d", &senha);

    // Verificação das credenciais
    if (nome[0]=='V' && nome[1]=='i' && nome[2]=='n' && nome[3]=='i' &&
        nome[4]=='c' && nome[5]=='i' && nome[6]=='u' && nome[7]=='s' &&
        senha == 1234)
    {
        printf("Acesso concedido\n");
    }
    else
    {
        printf("Acesso negado\n");
    }

    return 0;
}