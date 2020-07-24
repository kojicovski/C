#include <stdio.h>
#include <stdlib.h>
//Em C, podemos também criar nossos próprios tipos e variáveis
//Além da struct, podemos usar UNION, também chamada de UNIÃO

//ex:
//  union nome_union {
//      tipoN nomeN;
//  };


//Diferenças entre STRUCT e UNION
//Em Structs --> O alocamento de memória dos seus membros são feitas com a soma de todo espaço utilizado por eles
//Em Unios --> O alocamento de memória dos seus membros é feita apenas do membro que ocupa maior espaço. Dessa forma
//a utilização de cada um deles deverá ser de forma individual, ou seja, há um compartilhamento de memória, que sobrepõe o local
//em que um outro membro possa estar


union tipo {
    short int x;
    unsigned char c;
};



int main () {
    union tipo u;

    u.x = 5;
    u.c = 'a';

    printf("x = %d\n",u.x);//valor de x aparece como 97, pois o local de memória de c está sobrepondo o conteúdo de x.
    printf("c = %c\n",u.c);

    system("pause");
    return 0;
}
