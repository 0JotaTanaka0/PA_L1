#include <stdlib.h> //é necessária para utilizar as funções malloc, free e qsort
#include <stdio.h> //é necessária para entrada e saída padrão.

int comparar(const void *a, const void *b) {
    int valorA = *((int *)a);
    int valorB = *((int *)b);
    return valorA - valorB; // Ordem crescente

}

int main(void) { //Declaração da função main
    int i, num_valores; //Declara as variáveis i e num_valroes.

    printf("Informe a quantidade de valores: "); //Solicita o valor
    scanf("%d", &num_valores); //armazena o valor na variavel num_valores

    if (num_valores <= 0) { //verifica se o valor informado é menor ou igual a zero
        printf("O numero de valores deve ser maior que zero.");
        return 1;
    }

    int *valores = (int *)malloc(num_valores * sizeof(int));
    //Aloca dinamicamente um array de num_valores elementos do tipo int e armazena o ponteiro para este array na variável valores.

    if (valores == NULL) { //Verifica se a alocação de memória foi bem-sucedida.
        printf("Erro de alocação de memória.");
        return 1;
    }

    for (i = 0; i < num_valores; i++) { //Solicita ao usuário que insira os valores e os armazena no array valores.
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Ordena os valores usando qsort
    qsort(valores, num_valores, sizeof(int), comparar);

    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < num_valores; i++) {
        printf("%d\n", valores[i]);
    }//Imprime os valores ordenados em ordem crescente.

    free(valores); //Libera a memória alocada para o array valores.
    

    return 0; // Retorna zero para indicar sucesso.
}
