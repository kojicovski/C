#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.
*/

int main() {

    int i, j;

    printf("Type two int numbers, first 'i' after 'j':\n");
    scanf("%d\n", &i, &j);

    printf("Endereco do ponteiro i: %d\n",&i);
    printf("Endereco do ponteiro j: %d\n",&j);
    printf("\n");

    if (&i > &j)
        printf("i tem o endereco maior e seu conteudo eh: %d\n",i);
    else
        printf("j tem o endereço maior e seu conteudo eh: %d\n",j);





system("PAUSE");
return 0;
}
