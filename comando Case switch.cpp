#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Digite o numero da semana:\n");
	scanf("%d", &num);
	switch (num){
		case 1: printf("Domingo.\n");
		   break;
		case 2: printf("segunda feira.\n");
		   break;
		case 3: printf("terça feira.\n");
		   break;
		case 4: printf("quarta feira.\n");
		   break;
		case 5: printf("quinta feira.\n");
		   break;
		case 6: printf("sexta feira.\n");
		   break;
		case 7: printf("sabado feira.\n");
		   break;
		default: printf("Valor invalido.\n");
		   break;
		system("pause");   
	}
	
	
	
	return(0);
}
