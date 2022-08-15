#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int TAM = 200;
    char texto[TAM];
    int contador[127];

    printf("Digite um texto: ");
    gets(texto);

    // zera o contador
    for(int i=0;i<127;i++) {
        contador[i] = 0;
    }

    // conta quantas simbolos tem
    for(int i=0; i<strlen(texto); i++) {
        contador[texto[i]]++;
    }

    printf("\n---------Tabela [char : num.]---------\n");
    for(int i=33;i<127;i++) {
        printf(" %c : %d ", i, contador[i]);
        if((i+3)%5 == 0) {
            printf("\n");
        } else {
            printf("|");
        }
    }
    printf("\n---------------------------------------\n");

    return 0;
}




