#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	struct produto_lista[10];
	
	for(int i=0; i<10; i++){
	    lista[i].cod =i;
	    
		printf("Digite o valor do produto %d: \n",i);
		scanf("%f", lista[i].preco);   
	    fflush(stdin);
	    
	    printf("Digite a descriçao do produto %d: \n",i);
	    gets(lista[i].descr);
	    fflush(stdin);
		
	}
	return(0);
}
