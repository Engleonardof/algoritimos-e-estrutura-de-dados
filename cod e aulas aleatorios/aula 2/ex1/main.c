#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero1;
    double numero2;
    printf ("escreva o primeiro numero\n");
    scanf ("%lf",&numero1);
    printf ("escreva o segundo numero\n");
    scanf ("%lf",&numero2);
    printf ("a soma dos numeros sao %4.2lf \n", numero1+numero2);
    printf ("a diferença dos numeros sao %4.2lf\n", numero1-numero2);
    printf ("a multiplicacao dos numeros sao %4.2lf\n", numero1*numero2);
    printf ("a divisao dos numeros sao %4.2lf\n", numero1/numero2);
    return 0;
}
