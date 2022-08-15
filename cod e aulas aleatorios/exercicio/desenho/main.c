#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int linha=0; linha<8; linha++)
    {

        for (int col=0; col<8; col++)
        {
            if (linha>=col)
            {
                printf ("# ");
            }
        }
        printf ("\n");
    }
       return 0;
}







