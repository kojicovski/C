#include <stdio.h>
#include <stdlib.h>

//estrutura de uma struct (que � uma estrutura uashduahs)

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

//posso ter mais de uma estrutura no meu programa

struct ponto2d {
    int x, y;
};

struct ponto3d {
    int x, y, z;
};

int main () {


    //declara��o de vari�veis
    //char nome[50] rua[50];
    //int idade, numero;

    //declara��o deu ma vari�vel struct - pessoa minha estrutura e p minha vari�vel do tipo pessoa -
    //sendo assim tenho que minha vari�vel p contenha (nome, rua, idade e numero) em um local s�
    struct pessoa p;

    p.idade = 31; //comando de atribui��o
    printf("Digite um n�mero\n");
    scanf("%d",&p.numero); //comando de leitura
    printf("Digite seu nome\n");
    gets(p.nome); //comando de leitura
    p.numero = p.numero + p.idade - 100; //express�o
    printf("numero: %d\n",p.numero);
    printf("idade da pessoa: %d\n",p.idade);
    printf("-----------------------------SEGUNDO EXEPLO---------------------\n");

    struct ponto2d p2;
    struct ponto3d p3;

    p2.x = 10;
    p3.x = 12;
    printf("2d x = %d | 3d x = %d",p2.x, p3.x);


system('PAUSE');
return 0;
}
