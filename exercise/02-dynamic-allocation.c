#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;
    printf("Digite a quantidade valores que gostaria de inserir:\n");
    scanf("%d",&n);

    int *p = (int*) malloc(n*sizeof(int));
    printf("Digite %d valores inteiros\n",n);

    if (p == NULL) {
        printf("Erro: sem memória");
        exit(1); //termina programa
    }

    for (i = 0; i < n; i++) {
        scanf("%d",&p[i]);
    }
    printf("Valores inseridos:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n",p[i]);
    }
    free(p);

    system("pause");
    return 0;
}
