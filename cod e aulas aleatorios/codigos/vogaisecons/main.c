#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogal(char str1[],int tam_util);

int main() {
    int TAM = 200, tam_util,vogal1=0,consoante=0,numero=0,simbolo=0,espaco=0,vogal0=0;
    char str1[TAM];

    printf("Digite uma string 1: ");
    scanf("%[^\n]%*c", str1);

    tam_util = strlen(str1);

    vogal1=vogal(str1,tam_util);
    printf ("%d",vogal1);

   // for (int i=0; i<tam_util; i++)
    {
     //   if (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' )
        {
            vogal0++;
        }
        //else if (str1[i]=='0' || str1[i]=='1' || str1[i]=='2' || str1[i]=='3' || str1[i]=='4'|| str1[i]=='5' || str1[i]=='6' || str1[i]=='7' || str1[i]=='8' || str1[i]=='9')
        {
            numero++;
        }
        //else if (str1 [i]>33 && str1 [i]<47 || str1 [i]>39 && str1 [i]<65 || str1 [i]>90 && str1 [i]<97 || str1 [i]>122 && str1 [i]<128)
        {
            simbolo++;
        }
        //else if (str1 [i]==32)
        {
            espaco++;
        }
       // else
            consoante++;
    }

   // printf("o numero de vogais e de %d \n",vogal);
   // printf("o numero de consoantes e de %d \n",consoante);
   // printf("o numero de numeros e de %d \n",numero);
   // printf("o numero de simbolos e de %d \n",simbolo);
   // printf("o numero de espacos e de %d \n",espaco);
    return 0;
}

int vogal (char str1[],int tam_util) {
    int vogal=0;

for (int i=0; i<tam_util; i++) {
    if (toupper (str1[i])>='A' && toupper (str1[i])<='Z')
    {
        if (toupper (str1[i])=='A' ||
                toupper (str1[i])=='E' ||
                toupper (str1[i])=='I' ||
                toupper (str1[i])=='O' ||
                toupper (str1[i])=='U')
        {
            vogal++;
        }
    }
}

return vogal;

}
