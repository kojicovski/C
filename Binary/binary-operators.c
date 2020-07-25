#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct exemplo1{
    int campo_bit01:2;
    unsigned int campo_bit02:4;
    float valor_float;
}exemplo1_t;




int main() {

    int x = 0b01010101;

    while (x) { //"gambiarra" para printar o valor em binário hehe \o/
    if (x & 1)
        printf("1");
    else
        printf("0");

    x >>= 1;
    }

    printf("\n");
    printf("x = %i\n",x);
    x = (x >> 0);
    printf("x = %i\n",x);


    exemplo1_t exemplo;

    exemplo.campo_bit01 = 1;
    exemplo.campo_bit02 = 0xB;
    printf("campo01=%d\n", exemplo.campo_bit01);
    printf("campo02=%d\n", exemplo.campo_bit02);

    uint64_t var_a;
    printf("numero bits 'int'=%d\n",sizeof(var_a)*8);
    printf("numero bits 'short'=%d\n", sizeof(short)*8);

     unsigned int in = 0x00000008;
    unsigned int out;
    out = ~in;
    printf("in: %x\n", in);
    printf("out: %x\n", out);


    system("pause");
    return 0;
}
