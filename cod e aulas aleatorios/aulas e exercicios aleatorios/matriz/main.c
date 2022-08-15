#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma=0,secundaria=0;
    printf("declare o n da matriz \n");
    scanf ("%d",&n);
    int matriz[n][n];
    for (int l=0; l<n; l++)
    {
        for (int c=0; c<n; c++)
        {
            printf("informe o numero que esta na lnha %d e na coluna %d: \n",l+1,c+1);
            scanf(" %d",&matriz[l][c]);
        }
    }
    for (int i=0; i<n; i++)
    {

        for (int j=0; j<n; j++)
        {
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");

    }
    for (int i=0; i<n; i++)
    {

        for (int j=0; j<n; j++)
        {
            if (i==j)
                soma+=matriz[i][j];
        }
    }
    printf("a soma da diagonal principal e %d \n", soma);

    for (int i=0; i<n; i++)
    {

        for (int j=0; j<n; j++)
        {
            if (i+j==n-1)
                secundaria+=matriz[i][j];
        }
    }
    printf("a soma da diagonal secundaria e %d", secundaria);
    return matriz;
}
