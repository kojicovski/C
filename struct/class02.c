#include <stdio.h>
#include <stdlib.h>
#include <string.h> //lib para strings

//estrutura de uma struct (que é uma estrutura uashduahs)

/*
    struct nome_struct {
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
    };
*/

//definindo uma estrutura de escopo global - para ser usado em qualquer local do meu programa -
struct pessoa {
    char nome[30], rua[50];
    int idade, numero;
};



int main () {
    //inicializando uma struct
    struct pessoa p;
    strcpy(p.nome,"Samuel");
    strcpy(p.rua,"Rua dois");
    p.idade = 31;
    p.numero = 101;
    printf("Nome: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p.nome, p.idade, p.rua, p.numero);

    //uma maneira mais prática para declaração dos valores das variaveis numa struct
    //podemos definiar umal ista de valores para colocar na estrutura como em arrays

    struct pessoa p1 = {"Samuel1", "Rua 2", 24, 599 };

    //campos não definidos são inicializados com zero ou string vazia ""
    struct pessoa p2 = {"Samuel2","Rua 3",99};
    printf("Nome1: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p1.nome, p1.idade, p1.rua, p1.numero);
    printf("Nome2: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p2.nome, p2.idade, p2.rua, p2.numero);

    //atribuicaoo entre estruturas
    strcpy(p2.nome, p1.nome);
    strcpy(p2.rua, p1.rua);
    p2.idade = p1.idade;
    p2.numero = p1.numero;
    printf("Apos atribuicoes\n");
    printf("Nome1: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p1.nome, p1.idade, p1.rua, p1.numero);
    printf("Nome2: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p2.nome, p2.idade, p2.rua, p2.numero);

    printf("-------------SEGUNDO EXEMPLO---------------\n");
    //uma forma mais fácil, caso queira atribuir um estrutura toda a outra (desde que sejam do mesmo tipo)
    p2 = p1; //p1 está recebendo todos valores de p2
    printf("Nome2: %s\n idade: %d\n Rua: %s \n numero: %d\n ",p2.nome, p2.idade, p2.rua, p2.numero);

    printf("---------------TERCEIRO EXEMPLO--------------\n");
    //se tivermos duas estruturas de tipos DIFERENTES não podemos atribuir uma a outra
    struct ponto {
        int x, y;
    };
    struct novo_ponto {
        int x, y;
    };

    struct ponto p4, p5 = {1,2};
    struct novo_ponto p6 = {3,4};
    //CORRETO
    p4 = p5;
    printf("p4 = %d e %d\n",p4.x, p4.y);
    //ERRADO! TIPOS DIFERENTES
    //p4 = p6; // p4 é do tipo ponto p6 é do tipo novo_ponto
    //printf("p4 = %d e %d",p4.x, p4.y);

system('PAUSE');
return 0;
}
