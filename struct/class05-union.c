#include <stdio.h>
#include <stdlib.h>
//Em C, podemos tamb�m criar nossos pr�prios tipos e vari�veis
//Al�m da struct, podemos usar UNION, tamb�m chamada de UNI�O

//ex:
//  union nome_union {
//      tipoN nomeN;
//  };


//Diferen�as entre STRUCT e UNION
//Em Structs --> O alocamento de mem�ria dos seus membros s�o feitas com a soma de todo espa�o utilizado por eles
//Em Unios --> O alocamento de mem�ria dos seus membros � feita apenas do membro que ocupa maior espa�o. Dessa forma
//a utiliza��o de cada um deles dever� ser de forma individual, ou seja, h� um compartilhamento de mem�ria, que sobrep�e o local
//em que um outro membro possa estar


union tipo {
    short int x;
    unsigned char c;
};



int main () {
    union tipo u;

    u.x = 5;
    u.c = 'a';

    printf("x = %d\n",u.x);//valor de x aparece como 97, pois o local de mem�ria de c est� sobrepondo o conte�do de x.
    printf("c = %c\n",u.c);

    system("pause");
    return 0;
}
