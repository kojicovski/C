#include <stdio.h>
#include <stdlib.h>

/* Alocação de arrays multidimensionais:

Para alocar um array com mais de 1 dimensão
precisamos utilizar o conceito de
"ponteiro para ponteiro" */

int main () {

    //ponteiro (1 nível): cria um valor
    int *p = (int *) malloc(5*sizeof(int));
    //ponteiro para ponteiro (2 níveis):permite criar uma matriz
    int **m;
    //ponteiro para ponteiro para ponteiro (3 níveis): permite criar um array de 3 dimensões
    int ***d;

    /*Em um ponteiro para ponteiro, cada nível do ponteiro permite criar uma nova dimensão
    no array*/

    int **p1; //2 (*) asteriscos = 2 níveis = 2 dimensões
    int i,j, N = 2;
    //criar um array de ponteiros (int*)
    p1 = (int **) malloc(N * sizeof(int *));

    for (i = 0; i < N; i++) {
        //criar um array de int
        p1[i] = (int *) malloc(N * sizeof(int));
        for( j = 0; j < N; j++) {
            //lê a matriz de inteiros
            scanf("%d",&p1[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for(j = 0; j <N; j++) {
            printf("[%d]",p1[i][j]);
        }
        printf("\n");
    }

    //Em um array com mais de uma dimensão, a memória é liberada na ordem inversa da alocação
    for (i = 0; i < N; i++) {
        free(p[i]); //liberando as colunas
    }
    free(p);//liberando as linhas




    system("pause");
    return 0;
}
