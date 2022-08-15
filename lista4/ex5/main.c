#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=10,soma=0,quin=0,div,i;
    float media;
    int v[]= {1,15,4,7,29,5,6,5,40,8};
    for (i=0; i<tam; i++)
    {
        if (v[i]<15)
        {
            soma=v[i]+soma;
        }
        if (v[i]==15)
        {
            quin++;
        }
        if (v[i]>15)
        {
            media=v[i]+media;
            div++;
        }
    }
    printf("a soma dos elementos menores que 15 e: %d \n",soma);
    printf("a quantidade de elementos armazenados no vetor que são iguais a 15 e %d \n",quin);
    printf("a media dos elementos armazenados no vetor que são superiores a 15 e de %.2f", (media/div));
    return 0;
}
