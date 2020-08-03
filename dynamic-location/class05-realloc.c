#include <stdio.h>
#include <stdlib.h>

/*

    Função realloc serve para alocar ou realocar memória
    durante a execução do promgrama

    protótipo:
    void* realloc(void* prt, unsigned int num);
    prt -> ponteiro que irei realocar | num -> número de bytes para cada posição

    Funcionamento:
    A função realloc() recebe por parâmetro:
    - ponteiro para um bloco de memória já alocado;
    - a quantidade bytes a ser alocada.
    e retorna
    -  NULL: no caso de erro;
    - ponteiro para a primeiro posição do array
*/


int main () {

    //exemplo
    //cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(50 * sizeof(int));
    //Aumenta a memória alocada para 100 inteiros (400 bytes)
    v = (int*) realloc (v, 100 * sizeof(int));

    //Para alocar memória com realloc(), utiliza-se NULL como parâmetro
    int *p;
    p = (int*) realloc (NULL,50*sizeof(int));
    //equivale a
    p = (int *) malloc (50 * sizeof(int));

    /*Se o tamanho da memória solicitado for igual a zero, realloc irá liberar memória
    da mesma forque a função free*/
    p = (int*) realloc(p,0);
    //equivale a
    free(p);

    /*CUIDADE: Se não houver memória suficiente para alocar a memória
    requisitada, a função realloc() retorna NULL
    */

    int *p1 = (int *) malloc(5*sizeof(int));
    int *p2 = (int *) realloc(p1, 15*sizeof(int));
    if(p1 != NULL) {
        p1 = p2;
    }

    /*Observe acima que, caso a realocação de p1 não seja possível e for guardada diretamente em p1
    todos os dados de p1 serão perdidos, por isso, usa-se um vetor auxiliar para caso aconteça alguma
    falta de memória para realocar p1 */

    system("pause");
    return 0;
}
