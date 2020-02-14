#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 4
/* Trabalho MAPA de ADS Analise e desenvolvimento de sistemas 
RA. 17207255
Polo. Gama DF
Nome. Jayme Alves Moreira
*/

typedef struct Cad_livros{
	char autor[50];
	char obras[50];
	char editora[50];
	int cod;
}tipo_livros;

int main()
{
	tipo_livros lista[TAM];
	int i;
	
	for(i=0; i<TAM; i++){
		lista[i].cod=i;
		printf("Insira o nome do autor do livro %d:\n", i+1);
		gets(lista[i].autor);
		fflush(stdin);
		
		printf("Insira o nome das obras literarias %d:\n", i+1);
		gets(lista[i].obras);
		fflush(stdin);
		
		printf("Insira o nome da editora %d:\n", i+1);
		gets(lista[i].editora);
		fflush(stdin);
		
			
	}
	system("cls");
	printf("Os Cad_livros e autores foram preenchidos..\n\n");
	system("pause");
	
	for(i=0; i<TAM;i++){
		printf("%s- %s -%s -%d \n \n", lista[i].autor, lista[i].obras, lista[i].editora, lista[i].cod);
	}
	
	
	return(0);
}
