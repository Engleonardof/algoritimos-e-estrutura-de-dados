#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int TAM = 200;
    char palavra[TAM], texto[TAM];
    int tamPalavra, tamTexto;

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite uma palavra: ");
    gets(palavra);


    tamPalavra = strlen(palavra);
    tamTexto = strlen(texto);

    for(int indTexto=0; indTexto <= tamTexto-tamPalavra ; indTexto++) {

        int indPalavra = 0;
        while(texto[indTexto + indPalavra] == palavra[indPalavra] && indTexto+indPalavra < tamTexto) {
            indPalavra++;
        }

        if(indPalavra == tamPalavra) {
            printf("Encontrei a palavra na posicao: %d\n", indTexto);
        }
    }


    return 0;

}
