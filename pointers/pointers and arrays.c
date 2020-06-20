#include <stdio.h>
#include <stdlib.h>

int main() {

/* O nome do array � apenas um ponteiro que aponta para o primeiro elemento do array*/
//Arrays e matrizes s�o regi�es de mem�rias onde est�o armazenado os dados, ou seja, ponteiros

int vet[5] = {1,2,3,4,5};
int *p = vet;

int i;

for (i = 0; i < 5; i++) {
    printf("%d\n",p[i]); //acessando conte�do
    printf("%d\n",&p[i]); //acessando endere�o da mem�ria
    printf("endereco: %d\n",(p+i));
}

// Pode-se criar tamb�m um array de ponteiros

int *vet_point[5];//array de 5 ponteiros

/* Cada elemento do array pode apontar
para um endere�o de mem�ria,
seja ele de uma vari�vel ou de um array
*/

//Um array de ponteiros � o princ�pio de matrizes

int *pvet[2];
int x = 10, y[2] = {20,30};

pvet[0] = &x;
pvet[1] = y;

printf("pvet[0]: %p\n",pvet[0]);//&x
printf("pvet[1]: %p\n",pvet[1]);//&y[0]

printf("*pvet[0]: %d\n",*pvet[0]);//x
printf("pvet[1][1]: %d\n",pvet[1][1]);//y[1]


system("PAUSE");
return 0;
}
