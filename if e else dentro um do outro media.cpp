#include<stdio.h>
#include<stdlib.h>

int main()
{
	float media;
	printf("Digite a nota do aluno:\n");
	scanf("%f", &media);
	
	 if( media >= 7.0){
	 	printf("Aluno aprovado!\n");
	 }else{
	 	
	 	if(media >= 4.0)
	 	    printf("vai fazer Sub, \n ");
	 	    else
		    printf("Aluno reprovado!\n");    
	 }
  
	
	
	
	return(0);
}
