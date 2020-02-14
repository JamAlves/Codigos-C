#include<stdio.h>
#include<stdlib.h>

int main()
{

  int numero;

  void verifica()

 {
 if(numero > 0)	
   printf("\nPositivo");
 else if (numero < 0)
   printf("\nNegativo");
 else
   printf("\nZero");   	
}

printf("Digite um numero:");
scanf("%d", &numero);
verifica();
printf("\n");
sytem("pause");


return(0);
}
