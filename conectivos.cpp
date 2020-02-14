#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	
	if (a > 5 && a < 15)
	{
		printf("\n A variavel 'a' esta entre 5 e 15");
	}
	
	if(a > 5 || a > 15)
	{
		printf("\n A variavel 'a' e maior que 5 ou 15");
	}
	   
	if((a > 5 && a < 15) || a == 20 ){
		
		printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20");
	}
	
	
	system("pause");
	
	return(0);
}
