/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação - CEFET
Linguagem: C
Descrição: Programa que solicita um número inteiro ao usuário e calcula o dobro desse número.

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
    int num, dobro;

    // Solicita um número ao usuário
    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    // Cálculo do dobro
    dobro = num * 2;

    // Exibe o resultado
    printf("Número inserido: %d\n", num);
    printf("Dobro do número: %d\n", dobro);

    return 0;
}