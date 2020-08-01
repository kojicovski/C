#include <stdio.h>
#include <stdlib.h>

/*Quando trabalhamos com etruturas podemos passar para a função:

    -um campo
    -toda estrutura

        -por valor
        -por referencia
*/

struct ponto {
    int x,y;
};

void imprime_valor (int n) {
    printf("Valor = %d \n",n);
}

void soma_imprime_valor (int *n) {
    *n = *n + 1;
    printf("Soma valor = %d\n",*n);
}

void atribui (struct ponto *p) {
    (*p).x = 30; //notar que é necessário o (*p) na passar da struct por referencia, pois, o programa não entende que em *p.y a referecia é o *p e não p *py
    (*p).y = 40; //pode ser usado OPERADOR SETA no lugar de (*p).y = 40;
    p->x = 10;
    p->y = 20;
//  *p.x = 30 -----> ERRADO
//  *(P.X) = 30 ----> ERRADO
 }

int main () {

    struct ponto p1 = {10,20};
    imprime_valor(p1.x);
    imprime_valor(p1.y);
    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);
    atribui(&p1);
    printf("Struct por refencia 'void atribui (struct ponto *p)'\n");
    printf("x = %d\n",p1.x);
    printf("y = %d\n",p1.y);

    system ("pause");
    return 0;
}
