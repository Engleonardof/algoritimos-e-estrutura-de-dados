#include <stdio.h>
#include <stdlib.h>


void ler_vetor (int vet[], int tam);
void zerar_vetor (int vet[], int tam);
void imprimir_vetor (int vet[], int tam);
int maior_elemento (int vet[], int tam);
int menor_elemento (int vet[], int tam);
float media_elemento (int vet[], int tam);
void ordenar_vetor(int vet[], int tam);

int main()
{

    int menor,maior,v[]= {5,4,6,2,3},tam=5;
    float media;

    maior=maior_elemento(v,tam);
    printf (" %d ",maior);
    printf("\n");
    menor=menor_elemento (v,tam);
    printf (" %d ",menor);
    printf("\n");
    media=media_elemento(v,tam);
    printf(" %.2f",media);
    printf("\n");
    imprimir_vetor(v,tam);
    ordenar_vetor(v,tam);
    imprimir_vetor (v,tam);
    zerar_vetor(v,tam);
    imprimir_vetor(v,tam);
    return 0;
}

void ler_vetor (int vet[], int tam)
{

    for (int i=0; i<tam; i++)
        scanf ("%d ",&vet[i]);

}

void zerar_vetor (int vet[], int tam)
{

    for (int i=0; i<tam; i++)
        vet[i]=0;
}

void imprimir_vetor (int vet[], int tam)
{
    for (int i=0; i<tam; i++){
        printf("  %d ",vet[i]);
    }
    printf("\n");

}


int maior_elemento (int vet[], int tam)
{

    int maior;
    maior=vet[1];
    for (int i=1; i<tam; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
        }
    }
    return maior;
}

int menor_elemento (int vet[], int tam)
{
    int menor;
    menor=vet[1];
    for (int i=1; i<tam; i++)
    {
        if (vet[i]<menor)
        {
            menor=vet[i];
        }
    }
    return menor;
}


float media_elemento (int vet[], int tam)
{

    int soma=0;
    float media;
    for (int i=0; i<tam; i++)
    {
        soma=soma+vet[i];
    }
    media=soma/tam;
    return media;
}


void ordenar_vetor(int vet[], int tam)
{
int maior;
    for (int i=0; i<tam; i++)
    {
        for (int i=0; i<tam; i++)
        {
            if (vet[i]>vet[i+1])
            {
                maior=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=maior;
            }
        }
    }
}


