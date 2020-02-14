#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int quadrado, num;
	float raiz;
	
	printf("Digite um numero inteiro:");
    scanf("%d", &num);
	fflush()
	if(num % 2 ==0 )
    {
       raiz = sqrt(num);
	   	printf("O numero e par");
	   	printf("\n A raiz quadrada e: %.3f", raiz);
	}	
	else
	{
		quadrado = num * (num);
	}    printf("O numero e impar");
	     printf("\n O numero ao quadrado e: %d", quadrado);
	     
	
	
	return(0);
}
