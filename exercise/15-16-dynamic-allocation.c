#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,j,lin,col,aux1=0,aux2=0,aux3=0;
    int l1=0,c1=0,l2=0,c2=0,l3=0,c3=0;
    srand(time(NULL));

    printf("Quantas linhas deseja em sua matriz?\n");
    scanf("%d",&lin);
    printf("Quantas colunas deseja em sua matriz?\n");
    scanf("%d",&col);

    int **mat = (int**) malloc(lin*sizeof(int));
    int **mat_t = (int**) malloc(col*sizeof(int));

    for(i=0; i<lin; i++) {
        mat[i] = (int) malloc(col*sizeof(int));
        for(j=0; j<col; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    printf("Sua matriz gerado randomicamente abaixo.\n");
    for(i=0; i<lin; i++) {
        for(j=0; j<col; j++) {
            printf("%d|",mat[i][j]);
        }
        printf("\n");
    }
    printf("Tres maiores numeros da sua matriz.\n");
    for(i=0; i<lin; i++) {
        for(j=0; j<col; j++) {
            if (aux1 < mat[i][j]){
                aux1 = mat[i][j];
                l1 = i;
                c1 = j;
            }
        }
    }

    for(i=0; i<lin; i++) {
        for(j=0; j<col; j++) {
            if (aux2 < mat[i][j] && aux1 != mat[i][j]){
                aux2 = mat[i][j];
                l2 = i;
                c2 = j;
            }
        }
    }
    for(i=0; i<lin; i++) {
        for(j=0; j<col; j++) {
            if (aux3 < mat[i][j] && aux1 != mat[i][j] && aux2 != mat[i][j]){
                aux3 = mat[i][j];
                l3 = i;
                c3 = j;
            }
        }
    }


    printf("1° maior valor %d, L:%d\tC:%d\n",aux1, l1,c1);
    printf("2° maior valor %d, L:%d\tC:%d\n",aux2, l2,c2);
    printf("3° maior valor %d, L:%d\tC:%d\n",aux3, l3,c3);

    printf("Exercicio 16 - Matriz transposta\n");

    for(i=0; i<col; i++) {
        mat_t[i] = (int) malloc(lin*sizeof(int));
        for(j=0; j<lin; j++) {
            mat_t[i][j] = mat[j][i];
        }
    }

    for(i=0; i<col; i++) {
        for(j=0; j<lin; j++) {
            printf("%d|",mat_t[i][j]);
        }
        printf("\n");
    }


    system("pause");
    return 0;
}
