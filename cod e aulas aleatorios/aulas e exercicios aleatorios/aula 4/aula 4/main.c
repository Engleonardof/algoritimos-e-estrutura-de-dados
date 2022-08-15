#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf ("digite um numero inteiro \n");
    scanf ("%d", &a);

    if ((a % 2)==0 && (a>10))
    {
        printf ("sim");
    }
    else
    {
        if (!(a % 2)==0 && (a<50))
        {
            printf ("sim");
        }
        else
        {
            printf ("nao");
        }
    }

    return 0;
}
