#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct cidades
{
    char nome[30];
    int x;
    int y;
};

int main()
{

    int i, j,k=1, n;
    float distancia;
    char nome_aux1[30], nome_aux2[30];
    int x1_aux, y1_aux, x2_aux, y2_aux;
    float p1_aux,p2_aux;


    printf("Insira a quantidade de cidades que deseja colocar em sua matriz\n");
    scanf("%d",&n);

    struct cidades *cad = (struct cidades*) malloc(n*sizeof(struct cidades));
    double *mat = (double*) malloc(n*sizeof(double));

    printf("Insira o nome da cidade e suas cordenadas\n");

    for(i=0; i<n; i++)
    {
        setbuf(stdin,NULL);
        printf("Cidade:");
        gets(cad[i].nome);
        setbuf(stdin,NULL);
        printf("x:");
        scanf("%d",&cad[i].x);
        setbuf(stdin,NULL);
        printf("y:");
        scanf("%d",&cad[i].y);
    }

    printf("teste de distancia\n");
    distancia = (cad[1].x-cad[0].x) * (cad[1].x-cad[0].x)  + (cad[1].y-cad[0].y) * (cad[1].y-cad[0].y);
    distancia = sqrt(distancia);
    printf("Distancia %f\n",distancia);

    for(i=0; i<(n-1); i++)
    {
        float p1, p2;

        p1 = pow((cad[k].x - cad[i].x),2);
        p2 = pow((cad[k].y - cad[i].y),2);
        mat[i] = sqrt(p1+p2);
        k++;
    }

    printf("Matriz de distancias\n");

    for(i=0; i<(n-1); i++)
    {
        printf("%f\n",mat[i]);
    }

    setbuf(stdin,NULL);
    printf("Insira o nome de duas cidade e veja a distancia entre elas.\n");
    printf("Cidade 1:");
    gets(nome_aux1);
    setbuf(stdin,NULL);
    printf("Cidade 2:");
    gets(nome_aux2);
    setbuf(stdin,NULL);

    for(i=0; i<n; i++)
    {
        if(strcmp(cad[i].nome, nome_aux1) == 0)
        {
            x1_aux = cad[i].x;
            y1_aux = cad[i].y;
        }
        if(strcmp(cad[i].nome, nome_aux2) == 0)
        {
            x2_aux = cad[i].x;
            y2_aux = cad[i].x;
        }
    }

        p1_aux = pow(x1_aux-x2_aux,2);
        p2_aux = pow(y1_aux-y2_aux,2);

        printf("Distancia entre as duas cidades: %f",sqrt(p1_aux+p2_aux));


    system("pause");
    return 0;
}
