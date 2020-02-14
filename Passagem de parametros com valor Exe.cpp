#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int calcdobro (int x)
{
	x = 2 * x;
	return x;
}
main()
{
	int x, resposta;
	//clrscr();
	printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	fflush(stdin);
	system("pause");
	
	  resposta = calcdobro (x);
	   printf("O dobro do numero %d e %d", x, resposta);
}
