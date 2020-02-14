#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){


	char  nome[30];
	int   idade;
	
	printf("Informe o nome:");
	scanf("%s", &nome);
	
	printf("informe a idade:");
	scanf("%d", &idade);
	
	   if (idade <= 10) {
	   	   printf("\n Nome %s :", nome);
	   	   printf("\n idade %d :", idade);
	   	   printf("\n O valor do plano e : R$50,00");
	   	
	   }
	   else
	   {
	   	  if ((idade >=18) && (idade <=29))
	   	{
			 
	       printf("\n Nome %s :", nome);
	       printf("\n Idade %d :", idade);
	       printf("\n O valor do plano e: R$70,00");
	       fflush(stdin);
	       system("pause");
	       system("cls");
	    }
	    else
	    {
	    	if ((idade >=30) && (idade <=45))
	    	{
	           printf("\n Nome %s :", nome);
	           printf("\n Idade %d :", idade);
	           printf("\n O valor do plano e: R$90,00");
	           fflush(stdin);
	           system("pause");
	           system("cls");
	    		
		    }
	         else
	         {
	         	if((idade>=46) && (idade <=65))
	           {
				   	
	             printf("\n Nome %s :", nome);
	             printf("\n Idade %d :", idade);
	             printf("\n O valor do plano e: R$130,00");
	             fflush(stdin);
	             system("pause");
	         	 system("cls");
			 }
			   else
			 {
			 	printf("\n Nome %s :", nome);
	            printf("\n Idade %d :", idade);
	            printf("\n O valor do plano e: R$170,00");
	            fflush(stdin);
	            system("pause");
	            system("cls");
			 }
	    
		  }
	  }
   }
	return(0);
}
