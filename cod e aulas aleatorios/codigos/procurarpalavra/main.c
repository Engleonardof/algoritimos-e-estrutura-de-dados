#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam=200;
    char texto[tam], palavra[tam];
    int posicao=0;
    int tamUtilt,tamUtilp;
    int i=0;
    int inicio;

    printf("digite um texto\n");
    gets(texto);

    tamUtilt=strlen(texto);

    printf("digite a palavra que quer verificar se tem no texto \n");
    gets(palavra);
    tamUtilp=strlen(palavra);

    while (posicao<=tamUtilt)
    {
        while(posicao <= tamUtilt && texto[posicao] == ' ')
        {
            posicao++;
        }
        while(posicao <= tamUtilt && toupper(texto[posicao]) >= 'A' && toupper(texto[posicao]) <= 'Z')
        {

            while (i <tamUtilp && palavra[i]==texto[posicao])
            {

                i++;
                posicao++;
                if (i=1)
                {
                    inicio=posicao;
                }
            }

            if (i==tamUtilp-1){
        printf("achamos a palavra e  esta na posicao %d",inicio);
    }
    i=0;
    posicao++;
}
    }
return 0;
}
