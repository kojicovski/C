#include <stdio.h>
#include <stdlib.h>

/*
    Por que usar union?
1)Economia de mem�ria: se seus campos nunca s�o usados ao mesmo tempo,
n�o faz sentido reservar espa�o para todos dentro de uma struct.

2)Em unions, o espa�o reservado na mem�ria � sempre o valor de mem�ria
de sua vari�vel que possui maior espa�o.

3) Um dos usos mais comuns de uma uni�o � unir um tipo b�sico a um array
de tipos menores
*/

union tipo {
    short int x,z;
    unsigned char c[2],d[2];

};

int main() {

    union tipo y;

    y.x = 1545;
    printf("x = %d\n",y.x);
    y.c[0] = 'a';
    y.c[1] = 'b';
    printf("c[0] = %c\n",y.c[0]);
    printf("c[1] = %c\n",y.c[1]);
    printf("x = %d\n",y.x); //percebe-se que o espa�o da mem�ria j� foi utilizada
    y.x = 10;
    printf("x = %d\n",y.x); //depois de alocado novamente informa��o na mem�ria, � poss�vel sua utiliza��o

    printf("Segundo exemplo, separacao bit a bit\n");
    union tipo v;

    v.z = 1545; //00000110 00001001
    printf("z = %d\n",v.z);
    printf("d[0] = %d\n",v.d[0]);//00000110 -> 6
     printf("d[1] = %d\n",v.d[1]); //000001001 -> 9



    system("pause");
    return 0;
}
