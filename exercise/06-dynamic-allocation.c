#include <stdio.h>
#include <stdlib.h>


int main () {

    int i,j,n,menu,x,y,z,menu_aux;

    printf("Quanto de memoria em bytes de inteiros gostaria no seu PC?");
    scanf("%d",&n);

    int *memory = (int*) calloc(n,sizeof(int*));

    if(memory == NULL) {
        printf("Error: Memoria cheia!\n");
        system("pause");
        exit(1);
    }

    printf("Aperte 1 para alocar memoria em uma posicao desejada.\n");
    printf("Aperte 2 para verificar o conteudo em uma posicao desejada.\n");
    printf("Aperte 4 para para finalizar o programa.\n");
    printf("Aperte 0 para para retornar ao menu.\n");
    scanf("%d",&menu);

    while (1) {
    switch (menu) {
        case 0:
            printf("Aperte 1 para alocar memoria em uma posicao desejada.\n");
            printf("Aperte 2 para verificar o conteudo em uma posicao desejada.\n");
            printf("Aperte 4 para para finalizar o programa.\n");
            printf("Aperte 0 para para retornar ao menu.\n");
            scanf("%d",&menu_aux);
            menu = menu_aux;
            break;
        case 1:
            printf("Insira a posicao desejada para alocar memoria!\n");
            scanf("%d",&x);
            printf("Agora insira um valor inteiro que sera alocado.\n");
            scanf("%d",&y);
            memory[x] = y;
            printf("Alocado %d na posicao %d.\n",y,x);
            printf("Aperte 0 para retornar ao menu ou 4 para finalizar o programa!\n");
            scanf("%d",&menu_aux);
            menu = menu_aux;
            break;
        case 2:
            printf("Digite a posicao de memoria que gostaria de analisar:\n");
            scanf("%d",&z);
            printf("Na posição %d, possui: %d bytes de inteiros.\n",z,memory[z]);
            printf("Aperte 0 para retornar ao menu ou 4 para finalizar o programa!\n");
            scanf("%d",&menu_aux);
            menu = menu_aux;
            break;
        case 4:
            system("pause");
            exit(1);
            break;
        default :
            printf("Valor inválido!\n");
            menu = 0;
    }
    }
    return 0;
}
