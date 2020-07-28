#include <stdio.h>
#include <stdlib.h>

/*
    Al�m da struct e union, tamb�m � poss�vel cria��o do nosso
    pr�prio tipo de vari�vel. Podemos utilizar uma enum tamb�m
    chamada de ENUMERA��O;

    Lista de constantes num�ricas associadas a um nome.

    Na cria��o de uma enum, � poss�vel dizer em qual posi��o ela ir� come�ar.

    Pode-se atribuir valores da tabela ASCII para a enumera��o.
*/

//enum nome_enum {lista de indentificadores};
enum semana {Domingo=4,Segunda,Terca,Quarta,Quinta,Sexta,Sabado};
enum semana2 {Domingo2=1, Segunda2, Terca2, Quarta2 = 7, Quinta2, Sexta2, Sabado2};
enum escapes {retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};

int main (){

    enum semana s;
    enum semana2 sem;
    s = Segunda; //01 //atribuindo valor a vari�vel enum
    printf("Valor = %d\n",s); //veja que o valor de S � 01 e n�o Segunda, pois Segunda � apenas seu identificador


    printf("Domingo = %d\n", Domingo2); //1
    printf("Segunda = %d\n", Segunda2); //2
    printf("Quarta = %d\n", Quarta2); //7
    printf("Quinta = %d\n", Quinta2); //8

    printf("Segundo exemplo \n");

    enum escapes e = novalinha;
    printf("Teste %c de %c escrita\n",e,e);
    e = tabulacao;
    printf("Teste %c de %c escrita\n",e,e);


    system ("pause");
    return 0;
}



