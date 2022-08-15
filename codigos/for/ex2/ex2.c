#include <stdio.h>
#include <stdlib.h>

int main() {

    int TAM = 5;
    int vet[TAM];
    int menor;
    int maior;

    // ler a primeira posicao
    printf("Digite o valor para v[0]: ");
    scanf("%d", &vet[0]);

    // coloca o valor inicial nas variáveis
    menor = vet[0];
    maior = vet[0];


    // preencher e compara
    for(int i=1; i<TAM; i++) {
        printf("Digite o valor para v[%d]: ", i);
        scanf("%d", &vet[i]);

        // comparar
        if(vet[i] < menor) {
            menor = vet[i];
        }

        if(vet[i] > maior) {
            maior = vet[i];
        }
    }

    // imprimir o conteúdo do vetor
    for(int i=0; i<TAM; i++) {
        printf("%d ", vet[i]);
    }

    printf("\nMENOR: %d\n", menor);
    printf("MAIOR: %d\n", maior);

    return 0;
}
