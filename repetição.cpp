#include<stdio.h>
main()
{
	int num, i, fat;
	
	printf("\n informar o numero:");
	scanf("%d", &num);

	fat = 1;
	for (i=1; i<=num; i++)
	
	fat = fat * i;
	
	printf("\n O fatorial e : %d", fat);
	
	
	
	
	
	return(0);
}
