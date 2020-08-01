#include <stdio.h>
#include <stdlib.h>

/*  Recursion

Quando uma função chama a sí própria, é chamada de recursão
exemplo abaixo
*/

int fatorial (int n) {
    if (n == 0)
        return 1;
    else
        return n*fatorial(n-1);
}

int main() {
    int j = 5;
    int x = fatorial(j);
    printf("fatorial de %d = %d\n",j,x);


    system("pause");
    return 0;
}
