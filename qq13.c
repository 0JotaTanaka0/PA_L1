//Memory Leak ocorre quando o programa não libera para o sistema operacional memória que não é mais utilizada.
//Isso resulta em uma alocação de memória que não está mais sendo usada, mas ainda está ocupando espaço na memória do sistema.

//Exemplos de Memory Leak:

// Exemplo 1:
// A função aloca no heap um vetor de 100 bytes que não são desalocados.

// #include <stdlib.h>
// void teste(){
//  char *p;
//  p = (char *)malloc(100*sizeof(char));
//  /* processa operação */
//  ...
// }
// int main(){
//  int i = 0;
//  while (i < 100) {
//  teste();
//  i++;
//  }
//  return 0;
// }

// Exemplo 2:
// #include <stdlib.h>
// void func_with_leak() {
//     int *ptr = (int *)malloc(sizeof(int)); // Alocação de memória dinâmica
//     // Usar ptr
// }

// int main() {
//     while (1) {
//         func_with_leak();
//     }
//     return 0;
// }

// Exemplo 3:
// #include <stdlib.h>
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// void create_memory_leak() {
//     Node *head = (Node *)malloc(sizeof(Node)); // Alocação de memória dinâmica
//     // Usar head
// }

// int main() {
//     while (1) {
//         create_memory_leak();
//     }
//     return 0;
// }



