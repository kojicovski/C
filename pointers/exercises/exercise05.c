#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que leia dois valores inteiros e chame uma func¸ ˜ao que receba estes
2 valores de entrada e retorne o maior valor na primeira vari ´avel e o menor valor na
segunda vari ´avel. Escreva o conte´udo das 2 vari ´aveis na tela.
*/

int main() {

    int a,b;
    printf("valor para a:");
    scanf("%d",&a);
    printf("Valor para b:");
    scanf("%d",&b);
    printf("Chamando funcao troca\n");
    troca(a,b);

system("PAUSE");
return 0;
}

int troca (int i, int j) {
    if (i > j) {
        printf("Valor de a: %d\n",i);
        printf("Valor de b: %d\n",j);
    }
    else {
        int aux;
        aux = i;
        i = j;
        j = i;

        printf("Valor de a: %d\n",i);
        printf("Valor de b: %d\n",j);
        }

return 0;
}
