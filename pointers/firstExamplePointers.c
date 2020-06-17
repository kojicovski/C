#include <stdio.h>
#include <stdlib.h>

int main () {

int x = 10;
int *p;
p = &x;
//ponteiro p aponta para variavel x

printf("x = %d\n",x);
printf("&x = %d\n",&x);
printf("p = %d\n",p);
printf("*p = %d\n",*p);

*p = 12; //modificar conteudo da onde meu ponteiro está apontando
printf("x = %d\n",x);
printf("*p = %d\n",*p);
printf("p = %d\n",p);
printf("&x = %d\n",&x);

system("pause");
return 0;

}
