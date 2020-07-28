#include <stdio.h>
#include <stdlib.h>

/*
    Typedef permite que o desenvolvedor defina um "apelido"
    para um tipo existente
*/

typedef int inteiro;

struct cadastro {
    char nome[50], rua [50];
    int idade, numero;
}typedef struct cadastro cad;

int main () {

    int x = 10;
    inteiro y = 20; //utilizando o "apelido" defido
    y = y + x;
    printf("Soma = %d\n",y);

    struct cadastro c1; //sem o typedef
    cad c2; //com o typedef com o "apelido" cad

    system("pause");
    return 0;
}
