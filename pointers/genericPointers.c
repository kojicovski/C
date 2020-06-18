#include <stdio.h>
#include <stdlib.h>

int main () {
//ponteiro genérico: pode apontar para todos os tipos de dados existentes ou que ainda serão criados

void *novo_ponteiro;
void *v;

//exemplo

void *pp;

int *p1, p2 = 10;

p1 = &p2;
pp = &p2; //Endereço de int
printf("Endereço em pp: %p \n",pp);
pp = &p1;
printf("Endereço em pp: %p \n",pp);
pp = p1;
printf("Endereço em pp: %p \n",pp);

printf("----------------EXEMPLO 2 ------------------ \n");

pp = &p2; //endereço de um inteiro

//printf("Conteudo: %d \n",*pp); //ERRO, pois não sei qual o tipo do meu ponteiro por ser genérico

printf("Conteudo: %d \n", *(int*)pp); //informa que o tipo de meu ponteiro genérico ponta para um inteiro, dessa forma consigo visualizar

printf("----------------EXEMPLO 3 ------------------ \n");
/* As operações aritméticas são sempre realizadas com base em uma unidade de memória (1byte),
se o ponteiro for genérico, do tipo void*/

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
