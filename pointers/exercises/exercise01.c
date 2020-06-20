#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as vari ´aveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das vari ´aveis antes e ap´os a
modificac¸ ˜ao.
*/

int main() {

    int i = 0;
    float r = 0;
    char cchar = 'A';

    int *p;
    float *preal;
    char *pchar;

    p = &i;
    preal = &r;
    pchar = &cchar;

    printf("p: %d\n",*p);
    printf("real: %f\n",*preal);
    printf("pchar: %c\n",*pchar);

    *p = 10;
    *preal = 0.1;
    *pchar = 'B';

    printf("p: %d\n",*p);
    printf("real: %f\n",*preal);
    printf("pchar: %c\n",*pchar);





system("PAUSE");
return 0;
}
