#include <stdio.h>

// void main(){
//   int const *x = 3;
//   printf("%d", ++(*x));
// }
//O const não pode ser atribuido e  incrementado!


//Código corrigido!
// int main() {
//     int num = 3;
//     int *x = &num; // Ponteiro para um inteiro
//     printf("%d", ++(*x));
//     return 0;
// }