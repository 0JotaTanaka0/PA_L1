#include <stdio.h>

int main() {
    int i, j;
    int *p, *q;

    // 1. Legal: p = &i;
    // p = &i;
    // printf("Teste1\n");

    // 2. Ilegal: *q = &j; Está tentando atribuir o endereço de j ao valor apontado q!
    // *q = &j;
    // printf("Teste2\n");

    // 3. Legal: p = &*&i; 
    // p = &*&i;
    // printf("Teste3\n");

    // 4. Ilegal: i = (*&)j;       '(&)j' não é uma operação válida!
    // i = (*&)j
    // printf("Teste4\n");
  
    // 5. Legal: i = *&j;
    // i = *&j;
    // printf("Teste5\n");

    // 6. Legal: i = *&*&j;
    // i = *&*&j;
    // printf("Teste6\n");

    // 7. Ilegal: q = *p;         Tenta atribuir um valor inteiro '*p' a um ponteiro! 
    // q = *p;
    // printf("Teste7\n");

    // 8. Legal: i = (*p)++ + *q;
    // i = (*p)++ + *q;
    // printf("Teste8\n");

    return 0;
}
