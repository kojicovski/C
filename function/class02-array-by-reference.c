#include <stdio.h>
#include <stdlib.h>
/*Arrays sempre devem ser passados por "Referência" para uma função
Isso evita a cópia desnecessária de grandes quantidade de dados para outras
áreas de memória durante a chamada da função, o que afetaria o desempenho do
programa.
*/

void imprime (int *n, int m){ //primeiro parametro é o meu array -n-, e o segundo a quantidade de posições(tamanho) do meu vetor -m-

    int i;
    for (i = 0;i < m;i++)
        printf("%d \n",n[i]);
}

void imprime_matriz (int m[][2], int n) { //sempre deve ser informado quantas colunas possui o meu array, linha não é necessário
    int i, j;
    for (i=0; i< n;i++){
        for (j=0; j< 2;j++) {
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
}

int main () {
    //Na chamada da funcao, usa-se apenas o nome do array (sem colchete e indice), e sem o operador "&"

    int v[5] = {1,2,3,4,5};
    imprime(v,5);

    printf("segundo Exemplo, com matrizes\n");

    int mat [3][2] = {{1,2},{3,4},{5,6}};
    imprime_matriz(mat,3);

    system("pause");
    return 0;
}
