 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<math.h>
 int soma() // ou void no lugar do int 
 {
 	float num1, num2, total;
 	printf("Digite o primeiro numero:\n");
 	scanf("%f", &num1);
 	printf("Digite o segundo numero: \n");
 	scanf("%f", &num2);
 	fflush(stdin);
 	system("pause");
 	
 	total = num1 + num2;
 	
 	printf("A soma e %.2f", total);
 	
 	//return(0);
 }
     main ()
 {
 	
 	soma();
 	//return(0);
 }
