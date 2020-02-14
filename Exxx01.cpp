#include <stdio.h>

int x;

// Passagem por referência
void teste1(int *x) {
    *x = 5;
}

// Passagem por valor
void teste2(int x) {
    x = 0;
}

int main() {
    x = 3;
    teste1(&x);
    printf("%d\n", x + 4);
    teste2(x);
    printf("Valor final: %d\n", x);
    return 0;
}
