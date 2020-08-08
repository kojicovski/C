#include <stdio.h>
#include <stdlib.h>


int main () {

    int i,j,n,x;
    int count = 0;

    printf("Insira a quatidade numeros inteiros que gostaria de digitar:");
    scanf("%d",&n);

    int *p = (int*) malloc(n*sizeof(int));

    if(p==NULL) {
        printf("Erro: Memória cheia ou inválida!\n");
    }

    printf("Agora, insera %d valores inteiros:\n",n);
    for (i=0; i<n; i++) {

        scanf("%d",&p[i]);
    }

    printf("Insira um numero inteiro e veja se existe seu multiplo nos digitados anteriormente\n");
    scanf("%d",&x);
    printf("Os multiplos de 3 são:\n");
    for (i=0; i<=n; i++) {
        for(j=0; j<=n; j++) {
            if (x*i == p[j]) {
                count++;
                printf("%d,",p[j]);
            }
        }
    }
    printf("\n");
    printf("O numero %d possui %d multiplos\n",x,count);

    system("pause");
    return 0;
}
