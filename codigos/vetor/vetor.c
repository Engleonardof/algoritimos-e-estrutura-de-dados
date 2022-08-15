// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// prot�tipos das fun��es
void lerVetor(int v[], int T);
void imprimirVetor(int v[], int T);
void zerarVetor(int v[], int T);
int maiorElementoVetor(int v[], int T);
int menorElementoVetor(int v[], int T);
double mediaElementosVetor(int v[], int T);

// vari�veis globais


// main
int main() {

    int TAM = 5;
    int vetor[TAM];

    // invocar fun��o para ler o vetor
    lerVetor(vetor, TAM);

    // invocar a fun��o para imprimir o vetor
    imprimirVetor(vetor, TAM);

    // invocar a fun��o para encontrar o maior elemento
    printf("MAIOR: %d\n", maiorElementoVetor(vetor, TAM));

    // invocar a fun��o para encontrar o menor elemento
    printf("MENOR: %d\n", menorElementoVetor(vetor, TAM));

    // invocar a fun��o para calcular a m�dia dos valores
    printf("MEDIA: %.2lf\n", mediaElementosVetor(vetor, TAM));

    // invocar a fun��o para zerar o vetor
    zerarVetor(vetor, TAM);

    // invocar a fun��o para imprimir o vetor
    imprimirVetor(vetor, TAM);


    return 0;
}

// fun��o para ler um vetor
void lerVetor(int v[], int T) {
    for(int i=0; i<T; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

// imprimir vetor
void imprimirVetor(int v[], int T) {
    printf("VETOR: [ ");
    for(int i=0; i<T; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");

}

// zerar o vetor
void zerarVetor(int v[], int T) {
    for(int i=0; i<T; i++) {
        v[i] = 0;
    }
}

// encontrar o maior elemento do vetor e retorna-lo
int maiorElementoVetor(int v[], int T) {
    int maior = v[0];

    // encontro o maior elemento
    for(int i=1; i<T; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    // retorna o maior elemento
    return maior;
}

// encontrar o menor elemento do vetor e retorna-lo
int menorElementoVetor(int v[], int T) {
    int menor = v[0];

    // encontro o menor elemento
    for(int i=1; i<T; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    // retorna o menor elemento
    return menor;
}

double mediaElementosVetor(int v[], int T) {
    double media;
    int soma=0;

    // faz a soma de todos os elementos do vetor
    for(int i=0; i<T; i++) {
        soma += v[i];
    }

    // calcula a m�dia
    media = (double) soma / T;

    // retorna a m�dia
    return media;
}


