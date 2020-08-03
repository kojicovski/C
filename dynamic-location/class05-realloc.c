#include <stdio.h>
#include <stdlib.h>

/*

    Fun��o realloc serve para alocar ou realocar mem�ria
    durante a execu��o do promgrama

    prot�tipo:
    void* realloc(void* prt, unsigned int num);
    prt -> ponteiro que irei realocar | num -> n�mero de bytes para cada posi��o

    Funcionamento:
    A fun��o realloc() recebe por par�metro:
    - ponteiro para um bloco de mem�ria j� alocado;
    - a quantidade bytes a ser alocada.
    e retorna
    -  NULL: no caso de erro;
    - ponteiro para a primeiro posi��o do array
*/


int main () {

    //exemplo
    //cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(50 * sizeof(int));
    //Aumenta a mem�ria alocada para 100 inteiros (400 bytes)
    v = (int*) realloc (v, 100 * sizeof(int));

    //Para alocar mem�ria com realloc(), utiliza-se NULL como par�metro
    int *p;
    p = (int*) realloc (NULL,50*sizeof(int));
    //equivale a
    p = (int *) malloc (50 * sizeof(int));

    /*Se o tamanho da mem�ria solicitado for igual a zero, realloc ir� liberar mem�ria
    da mesma forque a fun��o free*/
    p = (int*) realloc(p,0);
    //equivale a
    free(p);

    /*CUIDADE: Se n�o houver mem�ria suficiente para alocar a mem�ria
    requisitada, a fun��o realloc() retorna NULL
    */

    int *p1 = (int *) malloc(5*sizeof(int));
    int *p2 = (int *) realloc(p1, 15*sizeof(int));
    if(p1 != NULL) {
        p1 = p2;
    }

    /*Observe acima que, caso a realoca��o de p1 n�o seja poss�vel e for guardada diretamente em p1
    todos os dados de p1 ser�o perdidos, por isso, usa-se um vetor auxiliar para caso aconte�a alguma
    falta de mem�ria para realocar p1 */

    system("pause");
    return 0;
}
