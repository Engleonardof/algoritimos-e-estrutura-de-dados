#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void lervetor (int vet[],int tam,char numerovetor);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tam=5,posresp=0;
    int v1[tam],v2[tam*2],resp[tam*2];

    lervetor(v1,tam,'1');
    lervetor(v2,tam*2,'2');



        for (int l=0; l<tam; l++){
        for (int c=0; c<tam*2;c++){
            if (v1[l]==v2[c])
            resp[posresp]=v1[l];
            posresp++
        }
        }
        if (resp[i])

    return 0;
}

void lervetor (int vet[],int tam,char numerovetor) {

        for (int i=0; i<tam;i++){
    printf("escreva que vai na posicao %d do vetor %c\n",i,numerovetor);
        scanf ("%d",&vet[i]);
    }
}









