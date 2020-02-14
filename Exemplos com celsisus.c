#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float convertet (float celsius);
main()
{
   float celsius, resposta;
   clrscr();
   printf("Informe a temperatura em graus celsius:");
   scanf("%f", &celsius);
   //fflush(stdin);

    resposta = convertet(celsius);
    printf("A temperatura %.2f em Fahreneit e %.2f", celsius, resposta);

    float convertet(float celsius)
    {
        float temp;
        temp = celsius * 1.8 + 32;

        return temp;

    }
    return(0);
}



