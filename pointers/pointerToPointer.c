#include <stdio.h>
#include <stdlib.h>

int main(){

/* Em C, é permitido criação de ponteiros com
diferentes níveis de apontamento:
Ponteiro que apontam para outros ponteiros.*/

int x = 10;
int *p = &x;
int **p2 = &p;
//Endereço em p2
printf("p2: %d\n",p2);//&p
//Conteudo do endereço;
printf("p2: %d\n",*p2);//&x
//Conteudo do endereço do endereço
printf("**p2: %d\n",**p2);//x

/*O nível de ponteiro é em relação a quantidade de * em sua declaração
e pode ter quantos níveis foram necessários*/

char letra = 'a';
char *pChar = &letra;
char **ppChar = &pChar;
char ***pppChar = &ppChar;
printf("*pChar: %c\n",*pChar);
printf("**ppChar: %c\n",**ppChar);
printf("***pppChar: %c\n",***pppChar);


system("PAUSE");
return 0;
}
