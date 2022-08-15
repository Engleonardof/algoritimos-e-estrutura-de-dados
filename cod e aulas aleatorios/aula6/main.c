#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do
    {
        printf(" \n MENU \n escolha uma opcao \n 1-bife \n 2- batata frita \n 3- refrigerante \n 4-brigadeiro\n 5-sair \n");
        scanf("%d",&a);
        if (a==1)
            printf(" a opcao escolhida foi bife \n");
        else if (a==2)
            printf(" a opcao escolhida foi batata frita \n");
        else if (a==3)
            printf(" a opcao escolhida foi refrigerante\n");
        else if (a==4)
            printf(" a opcao escolhida foi brigadeiro \n");
    }
    while (a<5);
    return 0;
}
