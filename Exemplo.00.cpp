#include <stdio.h>
 #include <stdlib.h>
 int main(){
    int numero, resto;
    scanf("%d", &numero);
    resto = numero/2;
    resto = numero-(resto*2);
    if(resto == 1)
	{
        printf("Primeira condicao:\n");
    }
    else{
        printf("Segunda condicao:\n");
    }
 }
