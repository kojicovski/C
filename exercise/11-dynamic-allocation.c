#include <stdio.h>
#include <stdlib.h>

struct registro {
    int matricula;
    char sobrenome[10];
    unsigned int ano_nascimento;
};


int main () {

    int i,n;

    printf("Quantos alunos deseja cadastrar?\n");
    scanf("%d",&n);

    struct registro *cad = malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        printf("Cad do %d aluno.\n",i);
        printf("Matricula:");
        scanf("%d",&cad[i].matricula);
        setbuf(stdin,NULL);
        printf("Sobrenome:");
        gets(cad[i].sobrenome);
        setbuf(stdin,NULL);
        printf("Ano de nascimento:");
        scanf("%i",&cad[i].ano_nascimento);
    }

    printf("------Alunos cadastrados-------\n");
    for(i=0; i<n; i++) {
        printf("Cad do %d aluno.\n",i);
        printf("Matricula:%d \n",cad[i].matricula);
        printf("Sobrenome:%s \n",cad[i].sobrenome);
        printf("Ano de nascimento:%i \n",cad[i].ano_nascimento);
    }

    free(cad);

    system("pause");
    return 0;
}
