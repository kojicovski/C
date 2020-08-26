#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i,j,k,a,n = 10, m = 1;

    int *num = (int*) malloc(10*sizeof(int));
    int *num_aux = NULL;

    printf("Insira uma sequencia de numeros, quando desejar parar, aperte zero.\n");


    while(m != 0)
    {
        if (i < n)
        {
            for(i=0; i<n; i++)
            {
                if(m != 0)
                {
                    scanf("%d",&m);
                    num[i] = m;
                    setbuf(stdin,NULL);
                }
                else
                    break;
            }
        }
        printf("valor de i:%d\n",i);
        if(i == n)
        {
            n = n+10;
            num_aux = (int*) calloc(n,sizeof(int));
            for(j=0; j<i; j++)
            {
                num_aux[j] = num[j];
            }
            free(num);
            num = (int*) calloc(n,sizeof(int));
            for(j=0; j<i; j++)
            {
                num[j] = num_aux[j];
            }
            free(num_aux);

        }


    }

    printf("-----------num---------\n");
    for(k=0; k<i; k++)
    {
        printf("%d\n",num[k]);
    }





    system("pause");
    return 0;
}
