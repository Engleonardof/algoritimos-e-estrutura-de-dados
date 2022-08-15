#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    int TAM =200, tamTexto, tamPalavra;
    char texto[TAM], palavra[TAM];


    printf("Digite um texto: ");
    gets(texto);

    printf("Digite um palavra: ");
    gets(palavra);

    tamPalavra = strlen(palavra);
    tamTexto = strlen(texto);

    for(int indTexto; indTexto <= tamTexto-tamPalavra; indTexto++) {

        int indPalavra = 0;
        while(texto[indTexto+indPalavra] == palavra[indPalavra] && (indPalavra+indTexto) < tamTexto) {
            indPalavra++;
        }

        if(indPalavra == tamPalavra) {
            printf("Achou a palavra na posicao %d\n", indTexto );
        }
    }

    return 0;
}
