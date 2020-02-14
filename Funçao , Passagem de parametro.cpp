#include<stdio.h> // passagem de parametros exercicio
#include<conio.h>
#include<stdlib.h>
float soma (float n1, float n2)
{
	float total;
	total = n1+ n2;
	return(total);
}
main()
{
	 float num1, num2 , resposta;
	// clrscr();
	printf("Digite o primeiro numero: \n");
	 scanf("%f", &num1);
	 fflush(stdin);
	 
	 printf("Digite o segundo numero: \n");
	 scanf("%f", &num2);
	 fflush(stdin);
	 system("pause");
	
	 resposta = soma(num1, num2);
	 printf("A soma e %.2f", resposta);

}
