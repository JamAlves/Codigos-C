#include<stdio.h>

 main()
 {
      int num, i, fat;
	  
	  printf("\n Informe o numero:");
	  scanf("%i", &num);
	  
	  fat =1;
	  
	  for(i=1; i<=num; i++)
	      fat = fat * i;
	  
	  printf("\n O fatorial e : %i", fat);	  	
   	
 	
 	
 	
 	
 	
  return(0);
 }
