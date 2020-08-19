#include <stdio.h>
#include <stdlib.h>

int search(int m[][5], int n);

int **aloca_matriz(int n, int x);

int main () {

    int i,j,n,m;
    srand(time(NULL));

    printf("Digite um valor para uma matriz quadrada:\n");
    scanf("%d",&n);

    int **mat = (int**) malloc(n*sizeof(int));

//    printf("Insira agora valores para sua matriz:\n");

//    for(i=0; i<n; i++) {
//        mat[i] = (int) malloc(n*sizeof(int));
//        for(j=0; j<n; j++) {
//            mat[i][j] = rand() % 25;
//        }
//    }

    printf("------Matriz-------\n");
//    for(i=0; i<n; i++) {
//        for(j=0; j<n; j++) {
//            printf("%d|",mat[i][j]);
//        }
//        printf("\n");
//    }

    printf("Digite um valor de 1 a 10 e veja se consta na matriz:\n");
    scanf("%d",&m);
    //search(m,n,mat,5);
//    search(mat,5);
    printf("%d",aloca_matriz(n,m));

    system("pause");
    return 0;
}

//int search( int m[][5], int n) {
//    int i, j ;
//    printf("matriz dentro da funcao\n");
//        for(i=0; i<n; i++) {
//            for(j=0; j<n; j++) {
//            printf("%d|",m[i][j]);
//        }
//        printf("\n");
//        }
//}

int **aloca_matriz(int n, int x) {
    int i,j;
    int **mat = (int**) malloc(n*sizeof(int));
        for(i=0; i<n; i++) {
        mat[i] = (int) malloc(n*sizeof(int));
        for(j=0; j<n; j++) {
            mat[i][j] = rand() % 5;
        }
    }

        for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d|",mat[i][j]);
        }
        printf("\n");
    }
    printf("valor de x %d",x);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if (mat[i][j] == x){
                printf("valor consta na matriz\n");
                return 1;
            }
            else{
                printf("valor nao consta na matriz\n");
                return 0;
            }
        }
    }


}
