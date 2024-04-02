// int main(){
//     float aloha[10], coisas[10][5], *pf, value = 2.2;
//     int i=3;

//     aloha[2] = value;
//Válido, pois atribui o valor da variavel value para a posicao '2' do array aloha

//     scanf("%f", &aloha);
//Inválido,pois scanf espera um ponteiro para uma variável float, mas aloha é um array de floats. 
//O certo seria fornecer um endereço de um elemento específico do array.

//     aloha = "value";
//Inválido, pois está tentando atribuir uma string à varável aloha, que é um array de floats.

//     printf("%f", aloha);
//Inválido, pois espera um único valor para imprimir, mas aloha é um array de floats. O certo seria especificar um elemento do array.

//     coisas[4][4] = aloha[3];
//Válido, pois atribui o valor de aloha[3] para a posição [4][4] do array bidimensional 'coisas'.

//     coisas[5] = aloha;
//Inválido, pois está tentando atribuir um array unidimensional('aloha') a uma linha especifica do array bidimensional ('coisas').

//     pf = value;
//Inválido, pois está tentando atribuir o valor da variável 'value' a um ponteiro para float 'pf'. 
//Em C atribuição direta entre um tipo de dado e um ponteiro não é permitida.

//     pf = aloha;
//Válido, pois atribui ao ponteiro pf o endereço do primeiro elemento do array aloha, 
//permitindo que pf aponte para o mesmo local na memória que o primeiro elemento do array aloha.

//     return 0;
// }
