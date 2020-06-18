#include <stdio.h>
#include <stdlib.h>

int main () {
//ponteiro gen�rico: pode apontar para todos os tipos de dados existentes ou que ainda ser�o criados

void *novo_ponteiro;
void *v;

//exemplo

void *pp;

int *p1, p2 = 10;

p1 = &p2;
pp = &p2; //Endere�o de int
printf("Endere�o em pp: %p \n",pp);
pp = &p1;
printf("Endere�o em pp: %p \n",pp);
pp = p1;
printf("Endere�o em pp: %p \n",pp);

printf("----------------EXEMPLO 2 ------------------ \n");

pp = &p2; //endere�o de um inteiro

//printf("Conteudo: %d \n",*pp); //ERRO, pois n�o sei qual o tipo do meu ponteiro por ser gen�rico

printf("Conteudo: %d \n", *(int*)pp); //informa que o tipo de meu ponteiro gen�rico ponta para um inteiro, dessa forma consigo visualizar

printf("----------------EXEMPLO 3 ------------------ \n");
/* As opera��es aritm�ticas s�o sempre realizadas com base em uma unidade de mem�ria (1byte),
se o ponteiro for gen�rico, do tipo void*/

void *p = 0x5DC;//1500
int i = 10;

p = &i;

printf("P = %d \n", p);
printf("&P = %d \n", &p);
p++;
printf("P = %d \n", p);
p = p + 15;
printf("P = %d \n", p);
p = p -2;
printf("P = %d \n", p);
//printf("CONTEUDO DE P = %d \n", *(void*)p);
*p++;
printf("*P++ = %d \n", p);
printf("*P++ = %d \n", &p);

system("pause");
return 0;
}
