#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i;
    printf("Insira a quantidade de caracteres tera sua string:");
    scanf("%d",&n);

    char *str = (char*) malloc(n*sizeof(char));
    char *str_copy = (char*) malloc(n*sizeof(char));

    printf("Digite uma palavra ou frase com o numero de caracteres inserido:\n");
    scanf("%s",str);
    printf("Palavra digitada: %s\n",str);
    printf("Palavra sem as vogais:\n");
    for (i=0; i<n;i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            str_copy[i] = str[i];
            printf("%c",str_copy[i]);
        }
    }
    printf("\nfora do for\n");
    printf("%s\n",str_copy);

    system("pause");
    return 0;
}
