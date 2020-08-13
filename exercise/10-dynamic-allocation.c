#include <stdio.h>
#include <stdlib.h>


int main () {

    int i,n;
    srand(NULL);

    printf("Insira quantos valores deseja armazenar em um vetor do tipo double:\n");
    scanf("%d",&n);

    double *p = (double*) malloc(n*sizeof(double));

    if (p==NULL) {
        printf("Erro: memória cheia!");
    }
    if (n < 10) {
        n = 10;
        p = realloc(p,n*sizeof(double));
    }

    for(i=0; i<n; i++) {
        p[i] = rand() % 100;
    }
    printf("valores do vetor gerados randomicamente:\n");

    for(i=0; i<n; i++) {
      printf("%.2lf\n",p[i]);
    }

    free(p);


    system("pause");
    return 0;
}
