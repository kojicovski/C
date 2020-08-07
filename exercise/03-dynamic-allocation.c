#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,n;
    int par = 0, impar = 0;

    printf("Insira a quantidade de numeros que deseja digitar:\n");
    scanf("%d",&n);

    int *ptr = (int*) malloc(n*sizeof(int));
    printf("Insira %d valores inteiros (negativo ou pisitivos)\n",n);

    for (i=0; i<n; i++) {
        scanf("%d",&ptr[i]);
    }

    for (i=0; i<n; i++) {
        if (ptr[i]%2 == 0) {
            par++;
        }
        else {
            impar++;
        }
    }

    printf("Dos nomeros digitados %d sao pares e %d sao impares\n",par,impar);

    system("pause");
    return 0;
}
