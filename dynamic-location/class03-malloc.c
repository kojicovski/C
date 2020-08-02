#include <stdio.h>
#include <stdlib.h>


/*
    Função malloc() serve para alocar memória durante a execução do programa.
    Ela faz o pedido de memória do computador e retorna um ponteiro com o endereço
    do início do espaç de memória alocado.

    protótipo:
    void* malloc (unsigned int num);


    A função recebe por parâmetro:
    - a quantidade de bytes a ser alocada e retorna:
        -NULL: no caso de erro;
        -ponteiro para a primeira posição do array.
 */



int main () {

    //exemplo
    int *v = malloc(50 * sizeof(int)); //cria array de 50 inteiros (cada inteiro 4 bytes) (200 bytes)
    char *c = malloc(200); //cria array de 200 char (cada char 1 byte) (200 bytes)

    //Se não houver memória suficiente para alocar a memória requisitada, a função malloc() retorna NULL;
    int *p;
    p = (int *) malloc(5*sizeof(int));
    if (p == NULL) {
        printf("Erro: Sem memória\n");
        exit(1); //termina o programa

    }

    int i;
    for (i = 0; i<10; i++) {

        printf("Digite p[%d]: ",i);
        scanf("%d",&p[i]);
    }
    //libera a memória alocada
    free(p);

    system("pause");
    return 0;
}
