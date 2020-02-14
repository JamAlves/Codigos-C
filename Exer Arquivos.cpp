#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
main()
{
	FILE *arq;
	char letra;
	   arq = fopen("C:\\arquivo.txt", "w");
	   if(arq == NULL)
	   {
	   	  printf("\n O arquivo não foi aberto. Ocorreu um erro!");
	   }
	   else
	   {
	   	     printf("\n Digite um caractere: ");
	   	     gets >> letra;
	   	     while ((letra != 'f') && (letra != 'F'))
	   }
	   
	      fputc(letra, arq);
	      if (ferror (arq))
	   {
	   	 printf("\n Erro na gravacao!!");
	   	
	   } 
	   else
	   {
	   	    printf("\n Gravacao efetuada com sucesso!!");
	   	    
		} 
		    printf("\n Digite outro caractere:");
		    gets >> letra;
	   }
     }
	
	fclose(arq);
	
	
	   
}  

  
