#include <stdio.h>
#include <stdlib.h>


struct registros
{
    char nome_prod[30];
    int cod_prod;
    float preco_prod;
};


int main ()
{

    int i,j,n,m;
    srand(time(NULL));

    printf("Vetor de 1024 bytes (1kbyte)\n");
    int *p = (int*) malloc(256*sizeof(int));
    printf("int *p = (int*) malloc(256*sizeof(int))\n");

    printf("\n");
    printf("Matriz de dimensao 10 x 10\n");
    int **p1 = (int*) malloc(10*sizeof(int));
    for(i=0; i<10; i++)
    {
        p1[i] = (int*) malloc(10*sizeof(int));
        for(j=0; j<10; j++)
        {
            p1[i][j] = rand() % 100;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d|",p1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres)codigo do produto (inteiro) e preco em reais");
    printf("----------------------------------------------------------------\N");
    printf("Cadastre ate 50 produtos:\n");
    struct registros *prod = (int*) malloc(50*sizeof(int));
    for(i=0; i<50; i++)
    {
        printf("Nome do produto:");
        scanf("%s",&prod[i].nome_prod);
        setbuf(stdin,NULL);
        printf("Codigo do produto:");
        scanf("%i",&prod[i].cod_prod);
        setbuf(stdin,NULL);
        printf("Preco do produto:");
        scanf("%f",&prod[i].preco_prod);
        setbuf(stdin,NULL);
    }
    printf("-----------SAIDA--------\n");
    for(i=0; i<50; i++)
    {
        printf("Nome do produto: %s\n",prod[i].nome_prod);
        printf("Codigo do produto: %i\n",prod[i].cod_prod);
        printf("Valor do produto: R$%.2f\n",prod[i].preco_prod);
    }
    printf("--------------------------\n");
    printf("Texto de até 100 linhas com ate 80 caracteres em cada linha\n");

    char **txt = (char*) malloc(100*sizeof(char));
    for(i=0; i<100; i++)
    {
        txt[i] = (char*) malloc(50*sizeof(char));
        for(j=0; j<50; j++)
        {
            txt[i][j]= 'a' + (char)(rand()%26);
        }
    }

    printf("Texto aleatorio:\n");
    for(i=0; i<100; i++)
    {
        for(j=0; j<50; j++)
        {
            printf("%c",txt[i][j]);
        }
        printf("\n");
    }


    system("pause");
    return 0;
}
