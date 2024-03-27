#include <stdio.h>

struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);
}

//Código não funciona!
//Inicialização de membros da estrutura: Em C, não é possível inicializar membros de uma estrutura dentro da sua definição.
//Uso de ponteiro não inicializado
//Erro de nome do membro
