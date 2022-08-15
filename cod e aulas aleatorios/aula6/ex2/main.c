#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,a;
    a=1;

    printf("me informe o primeiro numero\n");
    scanf("%d",&n1);
    do {
            printf("%d x %d = %d \n",n1,a,n1*a);
            a=a+1;
            }while(a<11);
    return 0;
}
