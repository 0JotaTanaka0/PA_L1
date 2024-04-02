#include <stdlib.h>
#include <stdio.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int i, num_valores;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &num_valores);

    if (num_valores <= 0) {
        printf("O numero de valores deve ser maior que zero.");
        return 1;
    }

    int *valores = (int *)malloc(num_valores * sizeof(int));

    if (valores == NULL) {
        printf("Erro de alocação de memória.");
        return 1;
    }

    for (i = 0; i < num_valores; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Ordena os valores usando qsort
    qsort(valores, num_valores, sizeof(int), comparar);

    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < num_valores; i++) {
        printf("%d\n", valores[i]);
    }

    free(valores);

    return 0;
}
