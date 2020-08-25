#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i,j,k,n = 10, m = 1;

    int *num = (int*) malloc(10*sizeof(int));
    int *num_aux = (int*) malloc(20*sizeof(int));

    printf("Insira uma sequencia de numeros, quando desejar parar, aperte zero.\n");


    while(m != 0)
    {
        if (i < 10)
        {
            for(i=0; i<10; i++)
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
            for(j=0; j<i; j++)
            {
                num_aux = (int*) malloc(n*sizeof(int));
                num_aux[j] = num[j];
                free(num);
                num = (int*) malloc(n*sizeof(int));
                num[j] = num_aux[j];
                free(num_aux);
            }
            for(i; i<n; i++)
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


    }

    printf("-----------num---------\n");
    for(k=0; k<n; k++)
    {
        printf("%d\n",num[k]);
    }
    printf("-----------num_aux---------\n");
    for(k=0; k<n; k++)
    {
        printf("%d\n",num_aux[k]);
    }





    system("pause");
    return 0;
}
