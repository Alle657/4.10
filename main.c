#include <stdio.h>

int main() {
    int n, i = 1;
    int potenza = 1;


    printf("Inserisci un numero compreso tra 2 e 20: ");
    scanf("%d", &n);


    if (n < 2 || n > 20) {
        printf("Numero non valido. Inserisci un valore compreso tra 2 e 20.\n");
        return 1;
    }


    while (i <= n) {
        potenza = potenza * 2;
        printf("2^%d = %d\n", i, potenza);
        i++;
    }

    return 0;
}
