#include <stdio.h>
#include <stdlib.h>

void tabuada();

int main()
{

    tabuadas();
    return 0;
}

void tabuada (int n) {
    int i;
    for (i=0;i<10;i++)
        printf("%2d x %2d = %3d \n",i+1,n,(n*(i+1)));
}


void tabuadas() {

    for(int n=1; n<=10; n++) {
        tabuada(n);
        printf("\n");
    }

}
