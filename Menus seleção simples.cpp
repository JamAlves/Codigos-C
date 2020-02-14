#include<stdio.h>
#include<stdlib.h>

// função principal do programa

main()
{

int opcao;

while(opcao < 1 || opcao > 3){

// interface de menu
printf("Escolha uma opcao:\n");
printf("1-opcao 1\n");
printf("2-opcao 2\n");
printf("3-opcao 3\n");

// lendo opcao
scanf("%d", &opcao);




switch(opcao){

case 1:
printf("\n Opcao 1 foi escolhida:");
break;
case 2:
printf("\n Opcao 2 foi escolhida:");
break;
case 3:
printf("\n Opcao 3 foi escolhida:"); 
break;
default :
printf("\n Opcao Invalida:");
break;

}

}
system("pause");

return(0);	
}
