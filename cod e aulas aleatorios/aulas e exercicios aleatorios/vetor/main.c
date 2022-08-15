#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int vetor1[10], maior=0,menor=999999,m,i;
    n=0;

    for (i=0; i<10;i++){
        printf("informe a posicao %d do vetor 1: ",i+1);
        scanf("%d",&vetor1[i]);
    }

    for (i=0;i<9;i++){

   if (maior<vetor1[i])
            maior=vetor1[i];
;
    }

    for(i=0;i<9;i++){
       if (menor>vetor1[i])
            menor=vetor1[i];}



    printf ("o maior e %d e o menor e %d",maior,menor);

    return 0;
}
