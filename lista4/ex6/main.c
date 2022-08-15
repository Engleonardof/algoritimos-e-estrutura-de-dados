#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=8;
    int v[tam],i,menor, maior,posm,posn,j;
    printf("informe a idade do menbro 1 da equipe\n");
    scanf("%d",&v[0]);
    j=i+1;
    v[j]=v[0];
    maior=0;
    for (i=1; i<tam; i++)
    {
        printf("informe a idade do menbro %d da equipe\n",i+1);
        scanf("%d",&v[i]);
        if (v[i]>maior)
        {
            maior=v[i];
            posm=i;
        }
        else if(v[i]<v[j])
        {
            menor=v[i];
            posn=i;
        }
    }
    printf("a maior idade e %d, na posicao %d \n",maior,posm);
    printf("a menor idade e %d, na posicao %d",menor,posn);
    return 0;
}
