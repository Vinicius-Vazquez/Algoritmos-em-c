/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição:
Programa que solicita um número inteiro ao usuário
e determina se ele é negativo, zero ou positivo.

Data: 2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Configura o idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração da variável
    int num;

    // Vetor que armazena os possíveis resultados
    char *valor[3] = {"Negativo", "Zero", "Positivo"};

    // Solicita um número ao usuário
    printf("Digite um número: ");
    scanf("%d", &num);

    // Determina se o número é negativo, zero ou positivo
    printf("O número é %s\n", valor[(num > 0) - (num < 0) + 1]);

    return 0;
}