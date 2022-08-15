#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("digite o primeiro numero inteiro \n",a);
    scanf ("%d", &a);
    printf("digite o segundo numero inteiro \n",b);
    scanf ("%d", &b);
    printf("digite o terceiro numero inteiro \n",c);
    scanf ("%d", &c);

    if (a>=b && a>=c){
        printf ("o maior numero e %d", a);
    }
        if (b>=c && b>=c){
        printf ("o maior numero e %d", b);
    }
        if (c>=a && c>=b){
        printf ("o maior numero e %d", c);
    }
    return 0;
}
