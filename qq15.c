#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i, j, tamanho, aux; //Declaração das variáveis locais i, j, tamanho e aux.
    
    printf("Informe a quantidade de valores: "); //Solicita o valor
    scanf("%d", &tamanho); //armazena o valor na variavel tamanho
    
    if (tamanho <= 0) { //verifica se o valor informado é menor ou igual a zero
        printf("O numero de valores deve ser maior que zero."); 
        return 1; // Encerra o programa com código de erro
    }
    
    int *valores = (int *)malloc(tamanho * sizeof(int)); 
   //Aloca dinamicamente um array de tamanho elementos do tipo int e armazena o ponteiro para este array na variável valores. 

    if (valores == NULL) { //Verifica se a alocação de memória foi bem-sucedida.
        printf("Erro de alocação de memória.");
        return 1; // Encerra o programa com código de erro
    }

    for (i = 0; i < tamanho; i++) { //Solicita ao usuário que insira os valores e os armazena no array valores.
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (valores[i] > valores[j]) {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }//Ordena os valores armazenados no array valores em ordem crescente usando o algoritmo de ordenação bubble sort.
    
    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", valores[i]);
    }//Imprime os valores ordenados em ordem crescente.
    
    free(valores); //Libera a memória alocada para o array valores.
    
    return 0; // Retorna zero para indicar sucesso
}
