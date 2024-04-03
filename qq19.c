#include <stdio.h>

void soma_vetores(int v1[], int v2[], int soma[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        soma[i] = v1[i] + v2[i];
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int v1[tamanho], v2[tamanho], soma[tamanho];

    printf("Digite os elementos do primeiro vetor: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo vetor: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &v2[i]);
    }

    soma_vetores(v1, v2, soma, tamanho);

    printf("A soma dos vetores resulta em: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", soma[i]);
    }

    return 0;
}
