#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[]= {5,9,15,7,8,60,53},max,j;

    for (int i=0; i<7; i++)
    {

        for (int i=0; i<7; i++)
        {
            j=i+1;
            if (v[j]>v[i])
            {
                max=v[j];
                v[j]=v[i];
                v[i]=max;
            }

        }
    }
    for (int i=0; i<7; i++)
        printf("%d ",v[i]);

    return 0;
}
