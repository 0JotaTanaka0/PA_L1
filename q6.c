#include <stdio.h>

int main(){
    int pulo[] = {0, 1, 2, 3, 4};

    printf("%d\n", *(pulo+2)); //terceiro elemento do vetor!
    printf("%d\n", *(pulo+3));
    printf("%d\n", pulo+3); 
    printf("%d\n", pulo+2);

    return 0;
}

//Resposta: *(pulo+2)