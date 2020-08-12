#include <stdio.h>
#include <stdlib.h>


int main () {

    int i, count = 0;
    int *p = (int*) calloc(1500,sizeof(int));

    for(i=0; i < 1500; i++) {
        if (p[i] == 0) {
            count++;
        }
    }
    printf("Possuem %d vetores com valor 0 (zero) no array p[]\n",count);

    for(i=0; i<1500; i++) {
        p[i] = i;
    }

    printf("10 primeiros elementos:\n");
    for(i=0; i<10; i++) {
        printf(" p[%d] = %d\n",i,p[i]);
    }

    printf("10 ultimos elementos:\n");
    for(i=1490; i<1500; i++) {
        printf(" p[%d] = %d\n",i,p[i]);
    }



    system("pause");
    return 0;
}
