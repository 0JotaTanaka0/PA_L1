#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int tamanho;
    printf("Quantos valores deseja ordenar? ");
    scanf("%d", &tamanho);

    // Alocando espaço para o array
    int *valores = (int*)malloc(tamanho * sizeof(int));

    // Pedindo ao usuário para inserir os valores
    printf("Insira os %d valores separados por espaco:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);
    }

    // Chamando qsort para ordenar os valores
    qsort(valores, tamanho, sizeof(int), comparar);

    // Depois da ordenação
    printf("Array depois da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(valores);

    return 0;
}