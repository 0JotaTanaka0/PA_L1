#include <stdio.h>

int main() {
    int mat[4], *p, x;
    p = mat + 1;
    p = mat;
    p = mat;
    x = (*mat);

    // Testando a primeira expressão
    p = mat + 1;
    printf("Valor de p: %d\n", *p);  // Espera-se que imprima 2

    // Testando a segunda e a terceira expressão
    p = mat;
    printf("Valor de p: %d\n", *p);  // Espera-se que imprima 1

    // Testando a quarta expressão
    x = (*mat);
    printf("Valor de x: %d\n", x);  // Espera-se que imprima 1

    return 0;
}
//Todas são válidas