#include<stdio.h>
#include<math.h>

main()
{
	int num , ant, suc;
	printf("Digite o numero:");
	scanf("%d", &num);
	fflush(stdin);
	
	ant = num -1;
	suc = num +1;
	
	printf("\n O antecessor e :%d" , ant);
	printf("\n O sucessor e : %d", suc);
	
	return(0);
}
