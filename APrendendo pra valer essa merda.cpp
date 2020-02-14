#include<stdio.h>
int main(void);


	
	int numero;
	
	void verifica()
{
		
		
	if (numero > 0)
		    printf("\nPositivo");
	else if(numero <0)
		    printf("\nNegativo");
	else
		    printf("\Zero");
		
}

	      
			

	
	printf("Digite um numero:");
	scanf("%d", &numero);
	verifica();
	printf("\n");
	system("pause");

	
	return(0);
}
