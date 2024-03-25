#include <stdio.h>

int main() {
    int i, j;
    int *p, *q;

    // 1. Legal: p = &i;
    // p = &i;
    // printf("Teste1\n");

    // 2. Ilegal: *q = &j; Não mostrou resultado
    // *q = &j;
    // printf("Teste2\n");

    // 3. Legal: p = &*&i;
    // p = &*&i;
    // printf("Teste3\n");

    // 4. Ilegal: i = (*&)j; Erro ao compilar
    // i = (*&)j
    // printf("Teste4\n");
  
    // 5. Legal: i = *&j;
    // i = *&j;
    // printf("Teste5\n");

    // 6. Legal: i = *&*&j;
    // i = *&*&j;
    // printf("Teste6\n");

    // 7. Ilegal: q = *p;
    // q = *p;
    // printf("Teste7\n");

    // 8. Legal: i = (*p)++ + *q;
    // i = (*p)++ + *q;
    // printf("Teste8\n");

    return 0;
}
