#include <stdio.h>
#include <stdlib.h>

/* Aloca��o de arrays multidimensionais:

Para alocar um array com mais de 1 dimens�o
precisamos utilizar o conceito de
"ponteiro para ponteiro" */

int main () {

    //ponteiro (1 n�vel): cria um valor
    int *p = (int *) malloc(5*sizeof(int));
    //ponteiro para ponteiro (2 n�veis):permite criar uma matriz
    int **m;
    //ponteiro para ponteiro para ponteiro (3 n�veis): permite criar um array de 3 dimens�es
    int ***d;

    /*Em um ponteiro para ponteiro, cada n�vel do ponteiro permite criar uma nova dimens�o
    no array*/

    int **p1; //2 (*) asteriscos = 2 n�veis = 2 dimens�es
    int i,j, N = 2;
    //criar um array de ponteiros (int*)
    p1 = (int **) malloc(N * sizeof(int *));

    for (i = 0; i < N; i++) {
        //criar um array de int
        p1[i] = (int *) malloc(N * sizeof(int));
        for( j = 0; j < N; j++) {
            //l� a matriz de inteiros
            scanf("%d",&p1[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for(j = 0; j <N; j++) {
            printf("[%d]",p1[i][j]);
        }
        printf("\n");
    }

    //Em um array com mais de uma dimens�o, a mem�ria � liberada na ordem inversa da aloca��o
    for (i = 0; i < N; i++) {
        free(p[i]); //liberando as colunas
    }
    free(p);//liberando as linhas




    system("pause");
    return 0;
}
