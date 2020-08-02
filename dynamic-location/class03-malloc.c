#include <stdio.h>
#include <stdlib.h>


/*
    Fun��o malloc() serve para alocar mem�ria durante a execu��o do programa.
    Ela faz o pedido de mem�ria do computador e retorna um ponteiro com o endere�o
    do in�cio do espa� de mem�ria alocado.

    prot�tipo:
    void* malloc (unsigned int num);


    A fun��o recebe por par�metro:
    - a quantidade de bytes a ser alocada e retorna:
        -NULL: no caso de erro;
        -ponteiro para a primeira posi��o do array.
 */



int main () {

    //exemplo
    int *v = malloc(50 * sizeof(int)); //cria array de 50 inteiros (cada inteiro 4 bytes) (200 bytes)
    char *c = malloc(200); //cria array de 200 char (cada char 1 byte) (200 bytes)

    //Se n�o houver mem�ria suficiente para alocar a mem�ria requisitada, a fun��o malloc() retorna NULL;
    int *p;
    p = (int *) malloc(5*sizeof(int));
    if (p == NULL) {
        printf("Erro: Sem mem�ria\n");
        exit(1); //termina o programa

    }

    int i;
    for (i = 0; i<10; i++) {

        printf("Digite p[%d]: ",i);
        scanf("%d",&p[i]);
    }
    //libera a mem�ria alocada
    free(p);

    system("pause");
    return 0;
}
