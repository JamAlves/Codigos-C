#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fibonacci (int x)
{
	if ((x == 0) || (x ==1))
	    return x;
	else
	    return fibonacci (x-2) + fibonacci (x-1);    
}
main()
{
	int num, resposta;
	//clrscr();
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	fflush(stdin);
	system("pause");
	resposta = fibonacci (num);
	printf("O fibonacci e %d", resposta);
}
