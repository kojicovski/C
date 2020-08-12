#include <stdio.h>
#include <stdlib.h>


int main () {

    int i,n;
    int count = 0;

    int *loteria = (int*) malloc(6*sizeof(int));
    int *jogador = (int*) malloc(6*sizeof(int));
    int *acertos = (int*) malloc(6*sizeof(int));

    loteria[0] = 10;
    loteria[1] = 20;
    loteria[2] = 30;
    loteria[3] = 40;
    loteria[4] = 50;
    loteria[5] = 60;

    printf("Digite 6 numeros da sorte.\n");

    for (i=0; i<6; i++) {
        scanf("%d",&jogador[i]);
    }

    for(i=0; i<6; i++) {
        if (loteria[i] == jogador[i]) {
            count++;
            acertos = realloc(acertos,count*sizeof(int));
            acertos[i] = loteria[i];
        }

    }
    printf("Numero sorteados:\n");
        for(i=0; i<6; i++) {
        printf("%d\n",loteria[i]);
    }
    printf("Numero acertados:\n");
        for(i=0; i<count; i++) {
        printf("%d\n",acertos[i]);
    }





    system("pause");
    return 0;
}
