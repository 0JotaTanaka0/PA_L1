#include <stdio.h>

int main(){
    int pulo[] = {0, 1, 2, 3, 4};

    printf("%d\n", *(pulo+2)); 
    printf("%d\n", *(pulo+3));
    printf("%d\n", pulo+3); 
    printf("%d\n", pulo+2);

    return 0;
}
