#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=8;
    int v[tam],v2 [tam],i;
    for(i=0; i<tam; i++)
            {
        printf("escreva que vai na posicao %d do vetor 1\n",i);
        scanf ("%d",&v[i]);
        v2[i]=v[i]*2;
            }
    for (i=0; i<tam; i++) {
            printf ("o valor do vetor resultante [%d] e : %d \n",i,v2[i]);
    }
    return 0;
}
