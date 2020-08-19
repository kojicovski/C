#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,j,linha,coluna;
    srand(time(NULL));

    printf("Quantas linhas deseja sua matriz?\n");
    scanf("%d",&linha);
    printf("Quantas colunas deseja em sua matriz?\n");
    scanf("%d",&coluna);

    int **mat = (int**) malloc(linha*sizeof(int));

    if (mat == NULL) {
        printf("Error: Memória cheia!\n");
    }

    printf("Valores da sua matriz serao gerados randomicamente.\n");
    for(i=0; i<linha; i++) {
        mat[i] = (int) malloc(coluna*sizeof(int));
        for(j=0; j<coluna; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    printf("Sua matriz abaixo.\n");
    for(i=0; i<linha; i++) {
        for(j=0; j<coluna; j++) {
            printf("%d |",mat[i][j]);
        }
        printf("\n");
    }

    //desalocando memória da minha matriz

    for(i=0; i<coluna; i++) {
        free(mat[i]);
    }
    free(mat);

    system("pause");
    return 0;
}
