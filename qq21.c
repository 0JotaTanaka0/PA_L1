//Memory leak, ou vazamento de memória

//Exemplo A----------------------------------------------------------------------------------------------------------------------------
//void f( ){
//   void *s;
//   s = malloc(50);
//   free(s);
// }
//Alocação e Liberação de memória correta.

//Exemplo B---------------------------------------------------------------------------------------------------------------------------
// int f( ){
//   float *a;
//   return 0;
// }
//O código não aloca explicitamente memória dinamicamente, portanto não há potencial para vazamento de memória.

//Exemplo C---------------------------------------------------------------------------------------------------------------------------
// int f(char *data){
//   void *s;
//   s = malloc(50);
//   int size = strlen(data);
//   if (size > 50)
//   return(-1);
//   free(s);
//   return 0;
// }
//a alocação de memória em s é desnecessária e resulta em um vazamento de memória, 
//pois a memória alocada não está sendo utilizada para nada útil antes de ser liberada.

//Exemplo D----------------------------------------------------------------------------------------------------------------------------
// int *f(int n){
//   int *num = malloc(sizeof(int)*n);
//   return num;
// }
//Não há liberação de memória alocada dinamicamente após o uso do array. Logo, haverá vazamento de memória.

//Exemplo E----------------------------------------------------------------------------------------------------------------------------
// int main(void){
//   int *num;
//   num = f(10);
//   free(num);
//   return 0;
// }
//Não existe a definição da função f(), portanto não é possível determinar se há vazamento de memória, mas se tivesse um malloc, 
//o free() faria a liberação da memória, assim, não ocorreria o vazamento.

//Exemplo F----------------------------------------------------------------------------------------------------------------------------
// void f(int n){
//   char *m = malloc(10);      aloca memória
//   char *n = malloc(10);      aloca memória
//   free(m);                   libera a memória apontada por m
//   m = n;                     faz com que o ponteiro m agora aponte para a mesma área de memória que n. 
//                              m perde a referência para o bloco de memória original alocado por malloc(10). Ocorrendo o vazamento!
//   free(m);                   libera a mesma área de memória duas vezes, o que é um comportamento indefinido em C.
//   free(n);                   libera a memória apontada por n.
// }
//Ocorre um vazamento de memória!