#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,j,n = 10, m = 1;

    int *num = (int*) malloc(10*sizeof(int));
    int *num_aux = (int*) malloc(10*sizeof(int));

    printf("Insira uma sequencia de numeros, quando desejar parar, aperte zero.\n");


    while(1) {
        if (i < 10) {
            for(i=0; i<=10; i++){
                if(m != 0){
                    scanf("%d",&m);
                    num[i] = m;
                }
                else
                    break;
            }
        }
        if(i == n) {
            n = n+10;
            for(j=0; j<i; j++) {
                num_aux[j] = num[j];
                free(num);
            }
            for(i; i<n; i++){
            if(m != 0){
                scanf("%d",&m);
                num[i] = m;
            }
            else
                break;
            }
        }
        break;
    }


    for(i=0; i<n; i++){
        printf("%d,",num[i]);
    }




    system("pause");
    return 0;
}
