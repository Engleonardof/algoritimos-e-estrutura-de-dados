#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

void zeraMatriz(double mat[LIN][COL]);
void imprimeMatriz(double mat[LIN][COL]);
void lerMatriz(double mat[LIN][COL]);
void lerMatriz1(double mat1[LIN][COL]);
void somamatriz (double mat[LIN][COL],double mat1[LIN][COL],double matsoma[LIN][COL]);

int main() {




    double mat[LIN][COL],mat1[LIN][COL],matsoma[LIN][COL];

    zeraMatriz(mat);
    lerMatriz(mat);
    imprimeMatriz(mat);
    lerMatriz1(mat1);
    imprimeMatriz(mat1);

    printf ("\n a soma e de: \n");
     imprimeMatriz(matsoma);

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

void lerMatriz1(double mat1[LIN][COL]) {

    for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
            printf("MAT[%d][%d]: ",lin, col);
            scanf("%lf", &mat1[lin][col]);

        }
    }
}

void somamatriz (double mat[LIN][COL],double mat1[LIN][COL],double matsoma[LIN][COL]) {

        for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
                matsoma[lin][col]=((mat1[lin][col])+(mat[lin][col]));
        }
        }



}

