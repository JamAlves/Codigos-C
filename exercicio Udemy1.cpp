#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
main(void){
    //Definindo Vari�veis
    int a;
    float b;
    char c;
    bool d;
 
    //Passando Valores//
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0
 
    //Escrevendo na Tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.1f", b);
    printf("\n O valor de c = %s", c);
    printf("\n O valor de d = %d\n", d);
 
    //Lendo Valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %s", &c); //Aqui adicionei um espa�o antes do %C para limpar o buffer
    scanf("%d", &d);
 
    //Escrevendo na Tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.1f", b);
    printf("\n O valor de c = %s", c);
    printf("\n O valor de d = %d\n", d);
    //Pausando
    system("pause");
    
}
