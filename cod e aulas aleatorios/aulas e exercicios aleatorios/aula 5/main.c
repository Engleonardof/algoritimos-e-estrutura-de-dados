#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=39;
    float vendas;
    printf ("escreva quanto foi vendido em acoes \n");
    scanf ("%f",&vendas);
    if (((vendas*0.017)+30)< a )
        printf("sua comissao sera %d \n",a);
    else if (vendas <= 2500)
        printf ("sua comissao sera %.2f reais ", vendas*0.017+30);
    else if (vendas > 2500.00 && vendas<=6250)
        printf ("sua comissao sera %.2f reais", vendas*0.0066+56);
    else if (vendas > 6250 && vendas<=20000)
        printf ("sua comissao sera %.2f reais", vendas*0.0034+76);
    else if (vendas > 20000 && vendas<=50000)
        printf ("sua comissao sera %.2f reais", vendas*0.0022+100);
    else if (vendas > 50000 && vendas<=500000)
        printf ("sua comissao sera %.2f reais", vendas*0.0011+155);
    else if (vendas > 500000)
        printf ("sua comissao sera %.2f reais", vendas*0.0009+255);
    return 0;
}
