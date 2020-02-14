#include<stdio.h>
#include<conio.h>
//#include<iostream.h>
#include<string.h>
main()
{
  FILE *arq;
  char frase[50];
  arq = fopen("C:\\teste.txt", "r");
  if(arq == NULL)
  {
      printf("\n O arquivo nao foi aberto. Ocorreu um erro!!");

  }
  else
  {
      while (!feof(arq))
  {

    fgets(frase,50, arq);
   if (ferror(arq))
   {
       printf("Erro na leitura do arquivo");
   }
   else
   {
       printf("\n Leitura realizada com sucesso. A cadeia e : %s", frase);
   }
  }
 }

 fclose(arq);

}
