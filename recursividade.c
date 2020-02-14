#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fatorial (int x)
{
    if (x==0)
        return 1;
    else
        return x*(fatorial(x-1));
}

int main()
{
    int num,resposta;
    clrscr();
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    fflush("stdio");

    resposta = fatorial(num);
    printf("O fatorial e %d",resposta);



 return(0);
}
