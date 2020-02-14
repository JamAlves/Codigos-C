 #include<stdio.h>
 int main(void) {
  int anoAtual = 2018;
  int anoNascimento = 0 ;
   int idade = 0;
    printf("Digite o ano do seu nascimento: ");
   scanf("&d", anoNascimento);
    
    (idade=anoAtual-anoNascimento);
    
    printf ("Sua idade é %d\n", idade);
   return (0);    
}
