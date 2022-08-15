#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int encontrarPalavra(char texto[], char palavra[]);


int main() {
    setlocale(LC_ALL, "Portuguese");

    int TAM = 200;
    char palavra[TAM], texto[TAM];

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite uma palavra: ");
    gets(palavra);

    printf("Encontrei a palavra na posição: %d\n", encontrarPalavra(texto, palavra) );

    return 0;
}


int encontrarPalavra(char texto[], char palavra[]) {

    int tamPalavra = strlen(palavra);
    int tamTexto = strlen(texto);

    for(int indTexto=0; indTexto <= tamTexto-tamPalavra ; indTexto++) {

        int indPalavra = 0;
        while(texto[indTexto + indPalavra] == palavra[indPalavra] && indTexto+indPalavra < tamTexto) {
            indPalavra++;
        }

        if(indPalavra == tamPalavra) {
            //printf("Encontrei a palavra na posicao: %d\n", indTexto);
            return indTexto;
        }
    }
    return -1; // que não foi encontrado a palavra no texto
}
