#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[] = {10,20,5,6,9,7,8,34,4,6,6,54,3,6,6,6};
    int TAM = sizeof(vet)/sizeof(vet[0]);


    for(int i=0;i<TAM;i++)
        printf("%d ", vet[i]);

    return 0;
}
