#include <stdio.h>
#include <stdlib.h>

int main () {

//soma e subtra��o de ponteiros
//soma e subtra��o de ponteiros � em rela��o ao tamanho da vari�vel, por exemplo, int = 4 bytes, char = 1 byte
//ou seja, se for somar p++ como no exemplo, � adiciona o 1x4, que � o tamanho da minha vari�vel

int *p = 0x5DC;
int *p1 = 0x5DC; //1500
char *c = 0x5DC;
int x, y;

printf("p = %d\nc = %d\n",p,c);
p++; //1504
c++; //1501
printf("p = %d\nc = %d\n",p,c);
p = p + 15;
printf("p = %d\n",p);
p = p - 2;
printf("p = %d\n",p);

//comparando ponteiros
//==, !=, >, <, >=, e <=

p = &x;
p1 = &y;

printf("p = %d\n",p);
printf("p1 = %d\n",p1);

if ( p == p1)
    printf("Ponteiros apontando para o mesmo local\n");
else
    printf("Ponteiros apontando para locais diferentes\n");

if ( p > p1)
    printf("Ponteiro p esta apontando para um endereco a frente de p1\n");
else
    printf("Ponteiro p esta apontando para um endereco atras de p1\n");


system("pause");
return 0;

}
