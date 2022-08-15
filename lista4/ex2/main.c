#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=20,i,par=0,impar=0,cinq=0,sete=0;
    int v[tam];
    for(i=0; i<tam; i++)
    {
        printf("escreva que vai na posicao %d do vetor 1\n",i);
        scanf ("%d",&v[i]);
        if (v[i]%2==0)
        {
            par++;
        }
        else
            impar++;

        if (v[i]>50)
        {

            cinq++;
        }
        if (v[i]<7)
        {
            sete++;
        }
    }
    printf("existem %d pares \n  existem %d impares \n tem %d numeros maiores que 50 \n e %d numeros menores que 7", par,impar,cinq,sete);

    return 0;
}
