#include <stdio.h>
#include <stdlib.h>


/*                  Fun��o calloc():
    Serve para alocar mem�ria durante a execu��o do programa.
    Faz o pedido de mem�ria ao computador e retorna um ponteiro
    com endere�o do in�cio do espa�o de mem�ria alocado
    prot�tipo:

    void* calloc(unsigned int num, unsigned int size);
    primeiro passa-se o n�mero de posi��es que meu array ter� e
    depois o n�mero de bytes utilizado por cada posi��o
*/

/*
    Funcionamento:
    A fun��o calloc() recebe por par�metro
    - n�mero de elementos do array a ser alocado;
    -tamanho de cada elemento do array;
    e retorna
    - NULL: no caso de erro;
    - ponteiro para a primeira posi��o do array
*/



int main () {

    //Na aloca��o de mem�ria, deve-se levar em conta o tamanho do tipo

    //Exemplo: criar um array de tamanho 50
    int *v = (int*) calloc(50,4); //Cria um array de 50 inteiro com 4 bytes cada
    char *c = (char*) calloc(200,1); //Cria um array de 200 char com 1 byte cada
    //soluca��o: usar sizeof()
    int *vv = (int*) calloc(50,sizeof(int));
    int *cc = (char*) calloc(50,sizeof(char));

    int *p;
    p = (int*) calloc(5,sizeof(int));
    if(p == NULL) {
        printf("Erro: Sem mem�ria!\n");
        exit(1); //finaliza o programa
    }

    int i;

    for(i = 0; i < 5; i++) {

        printf("Digite p[%d]:",i);
        scanf("%d",&p[i]);
    }

    //libera a mem�ria alocada
    free(p);

    /*
            malloc() x calloc()
        Ambas servem para  alocar mem�ria, mas calloc() inicializa todos os BITS
        do espa�o alocado com 0's
    */

    int *p2, *p3;

    p2 = (int*) malloc(5*sizeof(int));
    p3 = (int*) calloc(5,sizeof(int));
    printf("malloc()\tcalloc()\n");
    for(i = 0; i < 5; i++) {
        printf("p2[%d]:%d \t",i,p2[i]); //aqui todos os valores ser�o aleat�rios por n�o ter definido nenhum valor ainda3
        printf("p3[%d]:%d\n",i,p3[i]); //aqui todos os valores estar�o zerados
    }

    system("pause");
    return 0;
}
