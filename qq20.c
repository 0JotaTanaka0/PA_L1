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
    printf("\nInforme a quantidade de colunas da matriz B: ");
    scanf("%d", &colunaB);

    //Declara 3 matrizes, as matrizes de entrada A e B e a matriz de resultado C
    float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizC[linhaA][colunaB];

    if (colunaA == linhaB) {
        // Entrada de dados para a matriz A
        printf("Informe os valores da matriz A:\n ");
        for (i = 0; i < linhaA; i++) {
            for (j = 0; j < colunaA; j++) {
                printf("\nValor da %d linha e %d coluna: ", i + 1, j + 1);
                scanf("%f", &matrizA[i][j]);
            }
        }

        // Entrada de dados para a matriz B
        printf("Informe os valores da matriz B:\n ");
        for (i = 0; i < linhaB; i++) {
            for (j = 0; j < colunaB; j++) {
                printf("\nValor da %d linha e %d coluna: ", i + 1, j + 1);
                scanf("%f", &matrizB[i][j]);
            }
        }

        // Processamento e saída
        printf("\n\nProduto das matrizes A e B:\n");
        for (i = 0; i < linhaA; i++) {
            for (j = 0; j < colunaB; j++) {
                float soma = 0;
                for (int k = 0; k < colunaA; k++) {
                    soma += matrizA[i][k] * matrizB[k][j];
                }
                matrizC[i][j] = soma;
                printf("%6.f", matrizC[i][j]);
            }
            printf("\n\n");
        }
    } else {
        printf("Erro ao multiplicar as matrizes dadas!");
    }

    return 0;
}
