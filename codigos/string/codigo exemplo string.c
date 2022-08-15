#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int TAM = 200;
    char str1[TAM], str2[TAM], str3[TAM+TAM];

    printf("Digite uma string 1: ");
    //scanf("%s", str1);                // le string sem espaço em branco
    scanf("%[^\n]%*c", str1);        // le strind com espaço em branco sem o \n
    //scanf("%[^\n]s", str1);            // le string com espaços em branco
    //gets(str1);                      // le string com espaços em branco
    //fgets(str, sizeof(str1), stdin); // le string com espaços em branco

    printf("Digite uma string 2: ");
    scanf("%[^\n]%*c", str2);

    printf("\nString 1: %s\n", str1);
    printf("String 2: %s\n", str2);


    // mostrar que existe um \0 dentro da string
    int indice=0;
    while(indice < TAM && str1[indice] != '\0')  {
        printf("[%d - %c] ", str1[indice], str1[indice]);
        indice++;
        if(str1[indice] == '\0') {
            printf("BR\n\n");
        }
    }

    // exemplo de uso do strlen
    printf("O barra zero esta na posicao: %d\n", strlen(str1));


    // Exemplo de uso: strcmp
    if( strcmp(str1, str2)  == 0) {
        printf("As string sao iguais.\n");
    } else if(strcmp(str1, str2) < 0) {
        printf("%s vem antes de %s\n", str1, str2);
    } else {
        printf("%s vem depois de %s\n", str1, str2);
    }


    // Exemplo de uso: strcpy
    strcpy(str3, str1);
    printf("String 3 que eh copia de str1: %s\n", str3);


    // Exemplo concatenar
    strcpy(str3, strcat(str1, str2));
    printf("Concatenacao: %s\n", str3);




    return 0;
}
