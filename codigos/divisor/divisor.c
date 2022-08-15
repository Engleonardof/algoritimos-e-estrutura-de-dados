#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("N: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++) {
        if( (n % i)==0 ) {
            printf("O número %d é divisor de %d\n", i, n);
        }
    }


    return 0;
}
