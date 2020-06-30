#include <stdio.h>
#include <stdlib.h>
#include <string.h> //lib para strings

typedef struct {
    char nome[50], rua[50];
    int idade, numero;
}Pessoa;


int main () {
    //com struct sem array
    //struct pessoa p1, p2, p3, p4;
    //com struct e com array
    Pessoa p[4];
    p[0].idade = 24;
    p[1].idade = 25;
    p[2].idade = 26;
    p[3].idade = 27;

    strcpy(p[1].nome,"Ricardo");
    p[0].numero = 10;
    p[2].numero = p[0].numero - 1;

    for (int i = 0; i < 4; i++) {
        printf("Idade de p%i: %i \n", p[i], p[i].idade);
    };

system("PAUSE");
return 0;
}
