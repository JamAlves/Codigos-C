#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int num, resto;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	resto = num % 2;
	  if(resto ==0){
	  	printf("Par");
	  	
	  }else{
	  	printf("Impar");
	  	system("pause");
	  }
	
	
	
	return(0);
}
