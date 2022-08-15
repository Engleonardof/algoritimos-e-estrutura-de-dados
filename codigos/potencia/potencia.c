#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double base, exp;
    double resultado = 1;

    printf("Base: ");
    scanf("%lf", &base);

    printf("Expoente: ");
    scanf("%lf", &exp);


    int i = 0;
    while(i<exp) {
        resultado = resultado * base;
        i++;
    }


    //for(int i=0; i<exp; i++) {
    //    resultado = resultado * base;
    //}

    printf("%.0lf ^ %.0lf = %.0lf\n", base, exp, resultado);

    return 0;
}
