#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){


  srand((unsigned)time(NULL));
   int aleatorio = rand()% 3+1;

   printf("\n%d", aleatorio);

   system("pause");


}
