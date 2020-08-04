#include <stdio.h>
#include <stdlib.h>

int main () {
    int j;
    int *p = (int*) malloc (5*sizeof(int));
    printf("Digite 5 numeros inteiros:\n");

    if (p == NULL) {
        printf("Erro: Sem memória\n");
        exit(1); //termina o programa
    }

    for (int i = 0; i < 5; i++) {
        printf("[%d]",i);
        scanf("%d",&p[i]);
    }

    printf("Valor digitados de tras para frente\n");

    for (j = 4 ;j >= 0; j--) {
        printf("[%d]",j);
        printf("%d\n",p[j]);
    }

    system("pause");
    return 0;
}
