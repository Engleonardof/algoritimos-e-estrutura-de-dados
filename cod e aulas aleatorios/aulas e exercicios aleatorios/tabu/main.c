#include <stdio.h>
#include <stdlib.h>


int tabuada(int n,int i);
int main()
{

    int n,i,resultado;
    printf("informe um valor de n\n");
    scanf ("%d",&n);

    for (i=0;i<11;i++)
        printf(" %d  x %d = %d \n",i,n,tabuada(n,i));

    return 0;
}

int tabuada(int n,int i) {
    int resultado;
    resultado=n*i;
    return resultado;
}
