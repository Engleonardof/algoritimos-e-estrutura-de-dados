#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano;
    int dia = 0;
    int g, c, x, y, z, e, n;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Calculo do número Aúreo
    g = (ano % 19) + 1;

    // Calculo do século
    c = (ano / 100) + 1;

    // Calculo das correções
    x  =  ((3 * c ) / 4) - 12;
    z  =  ((8 * c + 5) / 25) - 5;

    // Calculo do Epacta
    e =  (11 * g + 20 + z - x) % 30;
    if (e == 25 && g > 11 || e == 24) {
        e++;
    }

    // Calculo Lua Cheia
    n = 44 - e;
    if (n < 21) {
        n += 30;
    }

    // Calculo do Domingo
    int d =  (5 * ano / 4) - (x + 10);
    n = (n + 7) - ((d + n) % 7);

    // Calculo do mes
    if (n > 31) {
        dia = (n - 31);
    } else {
        dia = n;
    }

    printf("Pascoa: %d de abril de %d", dia, ano);

    return 0;
}
