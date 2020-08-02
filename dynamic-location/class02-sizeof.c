#include <stdio.h>
#include <stdlib.h>

/*
    O operador sizeof() retorna o n�mero de bytes necess�rios para alocar um
    �nico elemento de um determinado tipo de dados

    forma geral:

    sizeof(nome_do_)tipo);
*/


struct ponto {

    int x,y;
    float z;
    //char c;
};

int main () {

    //exemplo
    int x = sizeof(int);
    printf("x = %d bytes\n",x);

    struct ponto p;
    printf("char = %d bytes\n",sizeof(char));
    printf("int = %d bytes\n",sizeof(int));
    printf("float = %d bytes\n",sizeof(float));
    printf("double = %d bytes\n",sizeof(double));
    printf("struct ponto= %d bytes\n",sizeof(p));


    system("pause");
    return 0;
}
