/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição: Programa que solicita dois números inteiros ao usuário e exibe a soma entre eles.

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
    int num1, num2, soma;

    // Entrada de dados
    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    // Cálculo da soma
    soma = num1 + num2;

    // Exibição do resultado
    printf("A soma dos números é: %d\n", soma);

    return 0;
}