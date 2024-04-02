#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i, j, num_valores, aux; //Declaração das variáveis locais i, j, num_valores e aux.
    
    printf("Informe a quantidade de valores: "); //Solicita o valor
    scanf("%d", &num_valores); //armazena o valor na variavel num_valores
    
    if (num_valores <= 0) { //verifica se o valor informado é menor ou igual a zero
        printf("O numero de valores deve ser maior que zero."); 
        return 1; // Encerra o programa com código de erro
    }
    
    int *valores = (int *)malloc(num_valores * sizeof(int)); 
   //Aloca dinamicamente um array de num_valores elementos do tipo int e armazena o ponteiro para este array na variável valores. 

    if (valores == NULL) { //Verifica se a alocação de memória foi bem-sucedida.
        printf("Erro de alocação de memória.");
        return 1; // Encerra o programa com código de erro
    }

    for (i = 0; i < num_valores; i++) { //Solicita ao usuário que insira os valores e os armazena no array valores.
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < num_valores - 1; i++) {
        for (j = i + 1; j < num_valores; j++) {
            if (valores[i] > valores[j]) {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }//Ordena os valores armazenados no array valores em ordem crescente usando o algoritmo de ordenação bubble sort.
    
    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < num_valores; i++) {
        printf("%d\n", valores[i]);
    }//Imprime os valores ordenados em ordem crescente.
    
    free(valores); //Libera a memória alocada para o array valores.
    
    return 0; // Retorna zero para indicar sucesso
}
