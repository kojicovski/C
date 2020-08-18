#include <stdio.h>
#include <stdlib.h>


struct produto {
    int cod;
    char nome_prod[50];
    int qtd_estoque;
    float preco_venda;
};

int main () {

    int i,j,n,prod_aux1=0,prod_aux2=0;

    printf("Insira quantos produtos gostaria de cadastrar:\n");
    scanf("%d",&n);

    struct produto *cad =(struct produto*) malloc(n*sizeof(struct produto));

    for(i=0; i<n; i++) {
        printf("Produto: %d\n",i);
        printf("Codigo:");
        scanf("%d",&cad[i].cod);
        printf("Nome do produto:");
        scanf("%s",&cad[i].nome_prod);
        printf("Qtd em estoque:");
        scanf("%d",&cad[i].qtd_estoque);
        printf("Preco de venda:R$");
        scanf("%f",&cad[i].preco_venda);
    }
    printf("-----------Produtos cadastrados--------\n");

//    for(i=0; i<n; i++) {
//        printf("Produto: %d\n",i);
//        printf("Codigo:%d\n",cad[i].cod);
//        printf("Nome do produto:%s\n",cad[i].nome_prod);
//        printf("Qtd em estoque:%d\n",cad[i].qtd_estoque);
//        printf("Preco de venda:R$ %2.f\n",cad[i].preco_venda);
//        printf("\n");
//    }

    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            if(cad[i].preco_venda > cad[j].preco_venda){
                prod_aux1 = i;
            }
            if(cad[i].qtd_estoque > cad[j].qtd_estoque) {
                prod_aux2 = i;
            }
        }
    }
    printf("Produto com maior preco de venda: %s\n",cad[prod_aux1].nome_prod);
    printf("Produto com maior quantidade disponivel em estoque: %s\n",cad[prod_aux2].nome_prod);


    system("pause");
    return 0;
}
