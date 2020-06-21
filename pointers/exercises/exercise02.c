#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco.
*/

int main() {

    int *j, *i;

    printf("Endereco do ponteiro i: %d\n",&i);
    printf("Endereco do ponteiro j: %d\n",&j);
    printf("\n");

    if (&i > &j)
        printf("i tem o endereco maior: %d\n",&i);
    else
        printf("j tem o endereço maior: %d\n",&j);





system("PAUSE");
return 0;
}
