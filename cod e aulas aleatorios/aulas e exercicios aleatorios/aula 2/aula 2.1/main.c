#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Idade;
    float altura;
    int peso;

    printf ("digite sua idade \n");
    scanf ("%d", &Idade);
    printf ("digite sua altura com ponto ex: 1.85 \n");
    scanf ("%f", &altura);
    printf ("digite sua peso \n");
    scanf ("%d", &peso);
    printf ("seu IMC e %.3f", peso/(altura*altura));
    return 0;
}
