#include <stdio.h>

int main() {
    // Definição de variáveis
    int i, j, linhaA, colunaA, linhaB, colunaB;

    // Entrada de dados
    printf("\nInforme a quantidade de linhas da matriz A: ");
    scanf("%d", &linhaA);
    printf("\nInforme a quantidade de colunas da matriz A: ");
    scanf("%d", &colunaA);
    printf("\nInforme a quantidade de linhas da matriz B: ");
    scanf("%d", &linhaB);
    printf("\nInforme a quantidade de colunas da matriz B:\n ");
    scanf("%d", &colunaB);

    //Declara 3 matrizes, as matrizes de entrada A e B e a matriz de resultado C
    float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizC[linhaA][colunaB];

    if (colunaA == linhaB) { // verifica se o número de colunas da matriz A é igual ao número de linhas da matriz B
        // Entrada de dados para a matriz A
        printf("Informe os valores da matriz A:\n ");
        for (i = 0; i < linhaA; i++) { //dois loops que solicita ao usuário que insira o valor de cada elemento.
            for (j = 0; j < colunaA; j++) {
                printf("\nValor da %d linha e %d coluna: ", i + 1, j + 1); //solicita ao usuário para inserir o valor do elemento na linha i + 1 e coluna j + 1
                scanf("%f", &matrizA[i][j]); //ponto flutuante.
            }
        }

        // Entrada de dados para a matriz B parecida com a anterior!
        printf("Informe os valores da matriz B:\n ");
        for (i = 0; i < linhaB; i++) {
            for (j = 0; j < colunaB; j++) {
                printf("\nValor da %d linha e %d coluna: ", i + 1, j + 1);
                scanf("%f", &matrizB[i][j]); //ponto flutuante.
            }
        }

        // Processamento e saída
        //utiliza três loops aninhados para iterar sobre cada elemento da matriz resultante, 
        //calculando o produto das entradas correspondentes das matrizes A e B.

        printf("\n\nProduto das matrizes A e B:\n");
        for (i = 0; i < linhaA; i++) { 
            for (j = 0; j < colunaB; j++) {
                float soma = 0;
                for (int k = 0; k < colunaA; k++) {
                    soma += matrizA[i][k] * matrizB[k][j];
                }
                matrizC[i][j] = soma;
                printf("%6.f", matrizC[i][j]); //é a string de formato que será usada para formatar a saída do valor armazenado na matriz resultado
            }
            printf("\n\n");
        }
    } else {
        printf("Erro ao multiplicar as matrizes dadas!");
    }

    return 0;
}
