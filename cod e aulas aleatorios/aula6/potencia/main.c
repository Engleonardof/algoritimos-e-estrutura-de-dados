#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n1,n2,a;
     int resp = 1;
     a=1;
     printf("me informe o primeiro numero\n");
    scanf("%d",&n1);
     printf("me informe o segundo numero\n");
    scanf("%d",&n2);
    while (a<=n2){

        resp  = resp*n1;
        a=a+1;
    }
        printf("o resultado da potencia %d",resp);
    return 0;
}
