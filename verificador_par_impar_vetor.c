/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição: Programa que solicita um número inteiro ao usuário e verifica se o número é par ou ímpar.

Data: 2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Configura o idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    int num;

    // Vetor de strings para determinar o tipo do número
    char *tipo[2] = {"Par", "Ímpar"};

    // Solicita um número ao usuário
    printf("Digite um número: ");
    scanf("%d", &num);

    // Exibe se o número é par ou ímpar
    printf("O número %d é: %s\n", num, tipo[num % 2]);

    return 0;
}