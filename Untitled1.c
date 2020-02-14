#include<stdio.h>
int main()
{
  int vetora[10];
	int i;

	 for(i=0;i<15;i++)
	 {
	 	printf("Digite o %d elemento:", i);
	 	scanf("%d", &vetora[i]);
	 }
	   printf("\n Vetor preenchido");

	   for(i=0;i<10;i++)
	   {
	   	printf("%d - ", vetora[i]);

	   }


 return(0);
}
