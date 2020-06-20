#include <stdio.h>
#include <stdlib.h>

int main() {

/* O nome do array é apenas um ponteiro que aponta para o primeiro elemento do array*/
//Arrays e matrizes são regiões de memórias onde estão armazenado os dados, ou seja, ponteiros

int vet[5] = {1,2,3,4,5};
int *p = vet;

int i;

for (i = 0; i < 5; i++) {
    printf("%d\n",p[i]); //acessando conteúdo
    printf("%d\n",&p[i]); //acessando endereço da memória
    printf("endereco: %d\n",(p+i));
}

// Pode-se criar também um array de ponteiros

int *vet_point[5];//array de 5 ponteiros

/* Cada elemento do array pode apontar
para um endereço de memória,
seja ele de uma variável ou de um array
*/

//Um array de ponteiros é o princípio de matrizes

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
