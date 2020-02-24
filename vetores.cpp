#include<stdio.h>
#include<stdlib.h>
#define TAM 3
main()
{
	
	int vetor[TAM],cont;
	
	vetor[0]=5;
	vetor[1]=10;
	vetor[2]=15;
	
	
	printf("\nPosiçao 0: %d", vetor[0]);
		printf("\nPosiçao 1: %d", vetor[1]);
			printf("\nPosiçao 2: %d\n", vetor[2]);
			
			
			for(cont = 0; cont < TAM; cont++){
				
			     printf("\nPosiçao %d : %d\n", cont, vetor[cont]);
				 
		    for(cont = 0; cont < TAM; cont++){
				scanf("%d", &vetor[cont]);
				
				 }	
					for(cont = 0; cont < TAM; cont++){
				
			     printf("\nPosiçao %d : %d\n", cont, vetor[cont]);
				 
			}

   }
	system("pause");
	
	return(0);
}
