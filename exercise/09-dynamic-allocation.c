#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,n;
    int count = 0;

    printf("Insira quantas posicoes deseja no seu vetor:\n");
    scanf("%d",&n);

    int *local = (int*) calloc(n,sizeof(int));

    if (local == NULL) {
        printf("Erro: memória cheia!\n");
    }
    printf("Seu vetor local[] possui %d posicoes!\n",n);
    printf("Insira valores para o seu vetor:\n");

    for(i=0; i<n; i++) {
        scanf("%d",&local[i]);
        if (local[i] < 0) {
            local = realloc(local,count*sizeof(int));
            break;
        }
        count++;
    }

    printf("Agora seu vetor local[] possui %d posicoes.\n",count);
    printf("Seus valores para cada posicao sao:\n");

    for(i=0; i<count; i++) {
        printf("local[%d] = %d\n",i,local[i]);
    }

    free(p);
    system("pause");
    return 0;
}
