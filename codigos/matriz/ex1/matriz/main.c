#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 3

void zeraMatriz(double mat[LIN][COL]);
void imprimeMatriz(double mat[LIN][COL]);
void lerMatriz(double mat[LIN][COL]);

int main() {




    double mat[LIN][COL];

    zeraMatriz(mat);
    lerMatriz(mat);
    imprimeMatriz(mat);

    return 0;
}

void zeraMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN; lin++) {
        // zera um conjunto de colunas
        for(int col=0;col<COL;col++) {
           mat[lin][col] = 0;
        }
    }
}
void imprimeMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
            printf("%.1lf ", mat[lin][col]);
        }
        printf("\n");
    }
}

void lerMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
            printf("MAT[%d][%d]: ",lin, col);
            scanf("%lf", &mat[lin][col]);
        }
    }
}




