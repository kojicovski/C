#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

    int i, j, n, m;

    printf("Insira a quatidade de nomes desejado para digitar com ate 30 caracteres:\n");
    scanf("%d",&n);
    char **nome = (char*) malloc(n*sizeof(char));
    char **nome_copy = (char*) malloc(n*sizeof(char));
    char *nome_aux = (char*) malloc(30*sizeof(char));

    for(i=0; i<n; i++)
    {
        nome[i] = (char*) malloc(30*sizeof(char));
        nome_copy[i] = (char*) malloc(30*sizeof(char));
        scanf("%s",nome[i]);
        strcpy(nome_copy[i], nome[i]);
    }

    printf("Nomes inseridos:\n");
    for(i=0; i<n; i++)
    {
        printf("Linha %d: %s",i,nome[i]);
        printf("\n");
    }

    printf("Insira uma linha que deseja apagar o nome digitado:\n");
    scanf("%d",&m);

    for(i=0; i<31; i++)
    {
        nome[m][i] = NULL;
    }
    for(i=0; i<n; i++)
    {
        printf("Linha %d: %s",i,nome[i]);
        printf("\n");
    }

    printf("Insira um nome digitado e substitua por outro\n");
    scanf("%s",nome_aux);

    printf("Agora, digite um novo nome para substituir:\n");
    for(i=0; i<n; i++)
    {
        if(strcmp(nome[i],nome_aux)==0)
        {
            scanf("%s",nome[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        printf("Linha %d: %s",i,nome[i]);
        printf("\n");
    }

    printf("Insira um nome que gostaria de apagar\n");
    scanf("%s",nome_aux);
    for(i=0; i<n; i++)
    {
        if(strcmp(nome[i],nome_aux)==0)
        {
            nome[i] = NULL;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("Linha %d: %s",i,nome[i]);
        printf("\n");
    }

    printf("Gostaria de recuperar qual linha apada da matriz?\n");
    scanf("%d",&m);

    strcpy(nome[m],nome_copy[m]);

    for(i=0; i<n; i++) {
        printf("Linha %d: %s",i,nome[i]);
        printf("\n");
    }

    system("pause");
    return 0;
}
