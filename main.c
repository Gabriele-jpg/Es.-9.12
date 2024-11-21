#include <stdio.h>

int calcolaMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcolaMCM(int a, int b) {
    return (a * b) / calcolaMCD(a, b);
}

int main() {
    int num1, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    int mcm = calcolaMCM(num1, num2);
    printf("Il Minimo Comune Multiplo di %d e %d è: %d\n", num1, num2, mcm);

    return 0;
}
