#iclude<stdio.h>

int main()
{
	float num1, num2, resultado;
	int op;
	
	printf("Digite o primeiro numero:");
	scanf("%f", &num1);
	system("pause");
	system("cls")
	
	printf("\n Digite o segundo numero:");
	scanf("%f", &num2);
	system("pause");
	system("cls");
	
	printf("\n Escolha a operacao:\n 1 - soma \n 2- subtracao \n 3- multiplicacao \n 4 - divisao \n");
	  scanf("%d", &op);
	  
	  if(op == 1){
	  	resultado = num1+ num2;
	  }
	
	
	return(0);
	
}
