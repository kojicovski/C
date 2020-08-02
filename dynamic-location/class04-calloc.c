#include <stdio.h>
#include <stdlib.h>


/*                  Função calloc():
    Serve para alocar memória durante a execução do programa.
    Faz o pedido de memória ao computador e retorna um ponteiro
    com endereço do início do espaço de memória alocado
    protótipo:

    void* calloc(unsigned int num, unsigned int size);
    primeiro passa-se o número de posições que meu array terá e
    depois o número de bytes utilizado por cada posição
*/

/*
    Funcionamento:
    A função calloc() recebe por parâmetro
    - número de elementos do array a ser alocado;
    -tamanho de cada elemento do array;
    e retorna
    - NULL: no caso de erro;
    - ponteiro para a primeira posição do array
*/



int main () {

    //Na alocação de memória, deve-se levar em conta o tamanho do tipo

    //Exemplo: criar um array de tamanho 50
    int *v = (int*) calloc(50,4); //Cria um array de 50 inteiro com 4 bytes cada
    char *c = (char*) calloc(200,1); //Cria um array de 200 char com 1 byte cada
    //solucação: usar sizeof()
    int *vv = (int*) calloc(50,sizeof(int));
    int *cc = (char*) calloc(50,sizeof(char));

    int *p;
    p = (int*) calloc(5,sizeof(int));
    if(p == NULL) {
        printf("Erro: Sem memória!\n");
        exit(1); //finaliza o programa
    }

    int i;

    for(i = 0; i < 5; i++) {

        printf("Digite p[%d]:",i);
        scanf("%d",&p[i]);
    }

    //libera a memória alocada
    free(p);

    /*
            malloc() x calloc()
        Ambas servem para  alocar memória, mas calloc() inicializa todos os BITS
        do espaço alocado com 0's
    */

    int *p2, *p3;

    p2 = (int*) malloc(5*sizeof(int));
    p3 = (int*) calloc(5,sizeof(int));
    printf("malloc()\tcalloc()\n");
    for(i = 0; i < 5; i++) {
        printf("p2[%d]:%d \t",i,p2[i]); //aqui todos os valores serão aleatórios por não ter definido nenhum valor ainda3
        printf("p3[%d]:%d\n",i,p3[i]); //aqui todos os valores estarão zerados
    }

    system("pause");
    return 0;
}
