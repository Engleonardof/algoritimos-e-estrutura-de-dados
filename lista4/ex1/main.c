#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=10;
    int v[tam],v2 [tam],v3[tam],i;
    for(i=0; i<tam; i++)
    {
        printf("escreva que vai na posicao %d do vetor 1\n",i);
        scanf ("%d",&v[i]);
        printf("escreva que vai na posicao %d do vetor 2\n",i);
        scanf ("%d",&v2[i]);
        v3[i]=v2[i]+v[i];

    }
    printf ("a soma dos vetores e: ");
    for (i=0; i<tam; i++)
    {
        printf ("%d  ",v3[i]);
    }
    return 0;
}
