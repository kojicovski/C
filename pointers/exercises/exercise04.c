#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ ˜ao que receba estas
2 vari ´aveis e troque o seu conte´udo, ou seja, esta func¸ ˜ao ´e chamada passando duas
vari ´aveis A e B por exemplo e, ap´os a execuc¸ ˜ao da func¸ ˜ao, A conter´a o valor de B e B
ter ´a o valor de A.
*/

int main() {

    int a = 10, b = 20;
    printf("Conteudo de a: %d\n",a);
    printf("Conteudo de b: %d\n",b);
    printf("Chamando funcao troca\n");
    troca(a,b);

system("PAUSE");
return 0;
}

int troca (int i, int j) {
    int *p, *q;
    p = j;
    q = i;

    printf("Conteudo de a: %d\n",p);
    printf("Conteudo de b: %d\n",q);
    return i,j;
}
