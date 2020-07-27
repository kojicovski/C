#include <stdio.h>
#include <stdlib.h>

/*
    Por que usar union?
1)Economia de memória: se seus campos nunca são usados ao mesmo tempo,
não faz sentido reservar espaço para todos dentro de uma struct.

2)Em unions, o espaço reservado na memória é sempre o valor de memória
de sua variável que possui maior espaço.

3) Um dos usos mais comuns de uma união é unir um tipo básico a um array
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
    printf("x = %d\n",y.x); //percebe-se que o espaço da memória já foi utilizada
    y.x = 10;
    printf("x = %d\n",y.x); //depois de alocado novamente informação na memória, é possível sua utilização

    printf("Segundo exemplo, separacao bit a bit\n");
    union tipo v;

    v.z = 1545; //00000110 00001001
    printf("z = %d\n",v.z);
    printf("d[0] = %d\n",v.d[0]);//00000110 -> 6
     printf("d[1] = %d\n",v.d[1]); //000001001 -> 9



    system("pause");
    return 0;
}
