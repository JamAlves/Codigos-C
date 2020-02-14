#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade, ano;
	float altura;
	char nome [30];
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("Digite a idade:");
	scanf("%d", &idade);
	
	printf("Digite a altura:");
	scanf("%f", &altura);
	system("pause");
	   ano = 2019 - idade; 
	   
	printf("\n O nome e : %s", nome); 
	printf("\n A altura e : %.2f", altura);   
	printf("\n A idade e : %d",idade);   
	printf("\n O ano de nascimento e : %d", ano);     
	
	
	
	
	
	
	
	
	
	

	
	return(0);
}

