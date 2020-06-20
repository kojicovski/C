#include <stdio.h>
#include <stdlib.h>

int main(){

/* Em C, � permitido cria��o de ponteiros com
diferentes n�veis de apontamento:
Ponteiro que apontam para outros ponteiros.*/

int x = 10;
int *p = &x;
int **p2 = &p;
//Endere�o em p2
printf("p2: %d\n",p2);//&p
//Conteudo do endere�o;
printf("p2: %d\n",*p2);//&x
//Conteudo do endere�o do endere�o
printf("**p2: %d\n",**p2);//x

/*O n�vel de ponteiro � em rela��o a quantidade de * em sua declara��o
e pode ter quantos n�veis foram necess�rios*/

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
