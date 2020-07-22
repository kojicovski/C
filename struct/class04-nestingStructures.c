#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char rua[50];
    int numero;

};

struct funcionario {
    int contrato;
    int pis;
    int cpf;
};

struct pessoa {
    char nome[50];
    int idade;
    struct endereco ender;
    struct funcionario func;
};




int main () {
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;

    //printf("idade:%d\n",p.idade);
    //printf("numero:%d\n",p.ender.numero);

    printf("Digite seu nome:\n");
    gets(p.nome);
    setbuf(stdin,NULL);//limpar o buffer do teclado, funciona em 90% dos casos
    printf("Digite sua idade:\n");
    scanf("%d",&p.idade);
    setbuf(stdin,NULL);
    printf("Digite seu a rua do seu endereco:\n");
    gets(p.ender.rua);
    setbuf(stdin,NULL);
    printf("Digite seu numero do seu endereco:\n");
    scanf("%d",&p.ender.numero);
    setbuf(stdin,NULL);
    printf("Digite o numero do seu contrato:\n");
    scanf("%d",&p.func.contrato);
    setbuf(stdin,NULL);
    printf("Digite seu PIS:\n");
    scanf("%d",&p.func.pis);
    setbuf(stdin,NULL);
    printf("Digite seu CPF:\n");
    scanf("%d",&p.func.cpf);
    setbuf(stdin,NULL);

    printf("seu nome:%s\n",p.nome);
    printf("sua idade:%d\n",p.idade);
    printf("rua do seu endereco:%s\n",p.ender.rua);
    printf("seu numero do seu endereco:%d\n",p.ender.numero);
    printf("numero do seu contrato:%d\n",p.func.contrato);
    printf("seu PIS:%d\n",p.func.pis);
    printf("seu CPF:%d\n",p.func.cpf);


    system("pause");
    return 0;

}
