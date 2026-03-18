/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição: Programa que solicita um número real ao usuário e calcula o quadrado desse número.

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
    float numeroReal, quadrado;

    // Solicita um número real ao usuário
    printf("Insira um número real: ");
    scanf("%f", &numeroReal);

    // Calcula o quadrado do número
    quadrado = numeroReal * numeroReal;

    // Exibe o resultado
    printf("O quadrado do número é: %.2f\n", quadrado);

    return 0;
}