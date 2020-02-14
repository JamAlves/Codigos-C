#include <stdio.h>

main ()
{
	
	int vetorA [30];
	int i;
	
	for (i=0;i<30;i++)
	{
		printf("Digite o %i elemento:" , i);
		scanf("%i", &vetorA [i]);
		
	}
	for (i=29;i>=0;i--)
	{
		printf("\n %i", vetorA[i]);
		
	}
	
	
	
	
	
	
	return(0);
}
