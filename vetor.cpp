#include <stdio.h>
main()
{   

    int vetorA[6];
	int i;
	for (i=0; i<6; i++)
	{
		printf("\n Digite o %d elemento do vetor:", i);
		scanf("%d", &vetorA[i]);
		
	}
	   printf("\n Vetor preenchido");
	   for (i=0; i<6; i++)
	{
		printf("\n O elemento na posicao %d e: %d", i , vetorA[i]);
    }
	return(0);
	
}

