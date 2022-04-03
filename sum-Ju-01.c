// Aufgabe : Summe von zwei Ganzzahlen
// Autor : jutsuman (Github name)
// Datum : 03.04.20022

#include <stdio.h>

int main() {
        int a, b, summe;

        printf("Geben Sie bitte eine Zahl ein : ");
        scanf("%i", &a);
        printf("Geben Sie bitte eine andere Zahl ein : ");
        scanf("%i", &b);

        // Wir berechnen die Summe von zwei Ganzzahlen
        summe = sum(a, b);

        printf("Die Summe von %i und %i ist : %i\n", a, b, summe);      

        return 0;
}

