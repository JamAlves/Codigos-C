#include<stdio.h>
main()
{
	
	int num, i, qtdade;
	
	printf("\n informe o numero: ");
	scanf("%d", &num);
	qtdade = 0;
	for(i=1; i<=num; i++)
	{
		if (num % i == 0)
		qtdade ++;
	}
	if (qtdade == 2)
	
	    printf("\n O numero e primo.");
	else
	    printf("\n Nao e primo.");
		      
	
	return(0);
}
