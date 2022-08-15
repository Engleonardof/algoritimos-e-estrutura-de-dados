#include <stdio.h>
#include <stdlib.h>

int main() {

    int TAM = 5;
    int vet[TAM];
    int menor;
    int maior;

    // preencher o vetor
    for(int i=0; i<TAM; i++) {
        printf("Digite o valor para v[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // imprimir o conteúdo do vetor
    for(int i=0; i<TAM; i++) {
        printf("%d ", vet[i]);
    }

    // buscando pela menor - versão 1
    //for(int i=0; i<TAM; i++) {
    //    if(vet[i] < menor) {
    //        menor = vet[i];
    //    }
    //}


    // buscando pelo menor versao 2
    menor = vet[0]; // recebe o primeiro elemento
    maior = vet[0]; // recebe o primeiro elemento
    for(int i=1; i<TAM; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }

        if(vet[i] > maior) {
            maior = vet[i];
        }
    }

    printf("\nMENOR: %d\n", menor);
    printf("MAIOR: %d\n", maior);

    return 0;
}
