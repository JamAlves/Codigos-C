#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fatorial (int x)
{
	if(x == 0)
	   return 1;
	else
	   return x* (fatorial (x-1));   
}
main()
{
	int num, resposta;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	resposta = fatorial (num);
	printf("O fatorial e %d", resposta);
	
}

