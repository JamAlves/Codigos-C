#include<stdio.h>
#include<stdlib.h>


int main(){


	int a = 1;
	char b = 'x';
	
	if (a == 1){
		printf("\n Opc�o escolhida: 1");
	}else if(a == 2){
		printf("\n Opc�o escolhida: 2");
	}else if(a == 3){
		printf("\n Opc�o escolhida: 3");
	}else{
		printf("\n Opc�o invalida:");
	}
	
	switch (a){
		case 1:
		    printf("\n Opcao escolhida:1");
			break;
		case 2:
		    printf("\n Opcao escolhida:1");
			break;	
			
	    case 3:
		    printf("\n Opcao escolhida:1");
			break;		
		
		default:
			printf("\n Opcao invalida");
		    break;	
			
	}
	system("pause");
	
	
	return(0);
}
