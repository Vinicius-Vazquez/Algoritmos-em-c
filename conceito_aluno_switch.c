/*
Autor: Vinicius Vazquez
Curso: Engenharia da Computação
Linguagem: C

Descrição: Programa que recebe uma nota de 0 a 10 e classifica o desempenho do aluno em conceitos (A, B, C, D ou F).

A nota digitada é convertida para inteiro para que possa ser utilizada na estrutura switch.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    // Configura idioma para português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    float num;
    int conceito;

    // Entrada da nota
    printf("Digite sua nota: ");
    scanf("%f", &num);

    // Conversão da nota para inteiro
    conceito = (int) num;

    // Classificação do conceito
    switch(conceito)
    {
        case 10:
        case 9:
            printf("Conceito A\n");
            break;

        case 8:
            printf("Conceito B\n");
            break;

        case 7:
            printf("Conceito C\n");
            break;

        case 6:
            printf("Conceito D\n");
            break;

        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Conceito F\n");
            break;

        default:
            printf("Valor inválido\n");
    }

    return 0;
}