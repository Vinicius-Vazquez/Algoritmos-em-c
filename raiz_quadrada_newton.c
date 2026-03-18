/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição: Programa que calcula a raiz quadrada de um número utilizando o método de Newton (aproximação iterativa).

O algoritmo começa com uma estimativa inicial e melhora progressivamente o resultado através de iterações.

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
    float num, aproximacao;

    // Solicita um número ao usuário
    printf("Digite um número: ");
    scanf("%f", &num);

    // Estimativa inicial
    aproximacao = num;

    // Método de Newton para calcular a raiz
    for (int i = 0; i < 15; i++)
    {
        aproximacao = (aproximacao + (num / aproximacao)) / 2;
    }

    // Exibe o resultado aproximado
    printf("A raiz aproximada do número é: %f\n", aproximacao);

    return 0;
}