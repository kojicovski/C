#include <stdio.h>
#include <stdlib.h>

/*
    Além da struct e union, também é possível criação do nosso
    próprio tipo de variável. Podemos utilizar uma enum também
    chamada de ENUMERAÇÃO;

    Lista de constantes numéricas associadas a um nome.

    Na criação de uma enum, é possível dizer em qual posição ela irá começar.

    Pode-se atribuir valores da tabela ASCII para a enumeração.
*/

//enum nome_enum {lista de indentificadores};
enum semana {Domingo=4,Segunda,Terca,Quarta,Quinta,Sexta,Sabado};
enum semana2 {Domingo2=1, Segunda2, Terca2, Quarta2 = 7, Quinta2, Sexta2, Sabado2};
enum escapes {retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};

int main (){

    enum semana s;
    enum semana2 sem;
    s = Segunda; //01 //atribuindo valor a variável enum
    printf("Valor = %d\n",s); //veja que o valor de S é 01 e não Segunda, pois Segunda é apenas seu identificador


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



