#include <stdlib.h> //é necessária para utilizar as funções malloc, free e qsort
#include <stdio.h> //é necessária para entrada e saída padrão.

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
//O qsort usa essa função para determinar a ordem dos elementos. Se a for menor que b, ela retorna um número negativo, 
//se forem iguais, retorna 0, e se a for maior que b, retorna um número positivo.

int main(void) { //Declaração da função main
    int i, tam; //Declara as variáveis i e num_valroes.

    printf("Informe a quantidade de valores: "); //Solicita o valor
    scanf("%d", &tam); //armazena o valor na variavel tam

    if (tam <= 0) { //verifica se o valor informado é menor ou igual a zero
        printf("O numero de valores deve ser maior que zero.");
        return 1;
    }

    int *valores = (int *)malloc(tam * sizeof(int));
    //Aloca dinamicamente um array de tam elementos do tipo int e armazena o ponteiro para este array na variável valores.

    if (valores == NULL) { //Verifica se a alocação de memória foi bem-sucedida.
        printf("Erro de alocação de memória.");
        return 1;
    }

    for (i = 0; i < tam; i++) { //Solicita ao usuário que insira os valores e os armazena no array valores.
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Ordena os valores usando qsort
    qsort(valores, tam, sizeof(int), comparar);

    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < tam; i++) {
        printf("%d\n", valores[i]);
    }//Imprime os valores ordenados em ordem crescente.

    free(valores); //Libera a memória alocada para o array valores.
    

    return 0; // Retorna zero para indicar sucesso.
}
