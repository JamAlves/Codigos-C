#include <stdio.h>,
 int main(){
           char menu;
           printf("\nA - Arquivo");
           printf("\nE - Editar");
          printf("\nB - Salvar");
          printf("\nS - Sair");
           printf("\nInforme a op��o do menu: ");
          scanf("%d", &menu);
        switch(menu) {
                          case 'A' : printf(">>Arquivo<<");break;
                         case 'E' : printf(">>Editar<<");break;
                          case 'B' : printf(">>Salvar<<");breack;
                         case 'S' : printf('>>Sair<<');break;
                          defol : printf (">>Op��o inv�lida<<");
          }
          return 0;
