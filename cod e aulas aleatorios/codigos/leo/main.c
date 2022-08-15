#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int TAM=200,tamUtil,quantidadeletras[128];
    char texto[TAM];

    printf("escreva um texto \n");
    gets(texto);
    tamUtil=strlen(texto);

    for (int i=0; i<127; i++){
    quantidadeletras[i]=0;}

    for (int i=0; i<127; i++)
    {
        for (int posicao=0; posicao<tamUtil; posicao++)
        {
            if (texto[posicao]==i)
                quantidadeletras[i]++;
        }
    }
    for (int i=0; i<127; i++)
    {

        if (quantidadeletras[i]!=0)
        {
            printf("%c: %d \n",i,quantidadeletras[i]);
        }
    }




    return 0;
}
