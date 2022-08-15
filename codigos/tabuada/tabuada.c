#include <stdio.h>
#include <stdlib.h>

// prot�tipo da fun��o
void tabuada(int n);

int main() {

    tabuadas();
    return 0;
}

// fun��o para exibir a tabuada
void tabuada(int n) {
    for(int i=1; i<=10; i++) {
        printf("%2d *%2d =%2d\n", n, i, n*i);
    }

}

// fun��o para exibir as tabuadas do 1 ao 10
void tabuadas() {

    for(int i=1; i<=10; i++) {
        tabuada(i);
        printf("-------------\n");
    }
}
