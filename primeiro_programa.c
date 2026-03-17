#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    int Num, dobro;
	printf("Insira um número inteiro: ");
	scanf("%d", &Num);
	
	dobro=Num*2;
	
	printf("Número inserido: %d\nDobro do número: %d", Num, dobro);

  return 0;
}

