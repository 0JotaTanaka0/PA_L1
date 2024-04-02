//Uma função é um conjunto de instruções armazenadas na memória do computador, 
//enquanto um ponteiro para uma função é uma variável que guarda o endereço de memória dessa função. 
//Isso possibilita o acesso e a invocação direta da função por meio do ponteiro. 
//Esses conceitos são essenciais para técnicas avançadas de programação, como callbacks e estruturas de dados flexíveis.



#include <stdio.h> //As bibliotecas padrão stdio.h e stdlib.h são incluídas para as funções de entrada/saída e alocação de memória.
#include <stdlib.h>
int soma (int a, int b) { //A função soma é definida, ela recebe dois argumentos inteiros 'a' e 'b' e retorna a soma deles.
    return a + b;
}
int main(){
    int x, y, z; //Declaração das variáveis x e y que serão usadas para armazenar os números digitados e a variável z para o resultado da soma.
    int (*p)(int, int); //(*p) Declara o ponteiro p e (int,int) são os tipos de parâmetros que a função aponta.
    printf("Informe 2 numeros: ");
    scanf("%d %d", &x, &y);

    p = soma; //O ponteiro p é atribuido a função soma
    z = p(x,y); //Chama a função apontada em p, passando os argumentos x e y e atribui o resultado na variável z.
    printf("A Soma dos valores informado: %d\n", z); //Imprimi o resultado.
    return 0;
}




