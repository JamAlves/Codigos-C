#include<stdio.h>
main()
{
	
	int filhos, npessoas;
	float salario, somas, somaf, msalario;
	
	npessoas = 0;
	somaf = 0;
	somas =0;
	msalario =0;
	
	printf("\n Informe o salario:");
	scanf("%f" , &salario);
	printf("\n Informe o numero de filhos:");
	scanf("%d", &filhos);
	while (salario != -1)
	{
		npessoas++;
		
		if(salario > msalario)
		   msalario = salario;
		somaf = somaf + filhos;
		somas = somas + salario;
		
		printf("\n Informe o salario:");
		scanf("%f", &salario);
		printf("\n Informe o numero de filhos:");
		scanf("%d", &filhos);   
	}
	
	printf ("\n A media de salarios e : %.2f", somas/npessoas);
	printf ("\n A media de filhos e : %.2f", somaf/npessoas);
	printf ("\n O maior salario e : %.2f", msalario);
	
	
	return(0);
}
