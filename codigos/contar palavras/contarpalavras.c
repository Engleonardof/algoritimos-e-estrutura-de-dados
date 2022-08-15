#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int contarPalavras(char texto[]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // variáveis locais a main
    int TAM = 200;
    char texto[TAM];

    printf("Digite um texto: ");
    gets(texto);

    printf("O número de palavras é de: %d\n", contarPalavras(texto)  );

    return 0;
}

int contarPalavras(char texto[]) {
    int posicao = 0; // posição que estou avaliando
    int numPalavras = 0; // núm. de palavras encontradas.
    int tamUtil; // contém a posição do \0
    int encontrouLetra; // variável indicadora para verificar se foi encontrado uma ou mais letras

    tamUtil = strlen(texto);

    while(posicao < tamUtil) {
        encontrouLetra = 0; // assume que não tem letras

        // ignora os espaços em branco
        while(posicao < tamUtil && texto[posicao] == ' ') {
            posicao++;
        }

        // pular as letras até o próximo espaço em branco ou fim
        while(posicao < tamUtil && toupper(texto[posicao]) >= 'A' && toupper(texto[posicao]) <= 'Z') {
            posicao++;
            encontrouLetra = 1;
        }

        // variável indicadora para verificar se letras foram encontradas
        if(encontrouLetra == 1) {
            numPalavras++;
        }
   }

   return numPalavras;
}
