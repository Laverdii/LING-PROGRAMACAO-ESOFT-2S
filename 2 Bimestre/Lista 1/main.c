#include <stdio.h>
#include <stdlib.h>

int main() {
    // 3. "Faça um programa que leia um número [com n positivo] e mostre na tela o seu valor em base binária (bits)."
    int n, resto;
    int bin = 0;
    int mult = 1;

    printf("Digite um numero decimal: ");
    scanf("%d", &n);

    while (n > 0) {
        resto = n % 2;
        bin += resto * mult;
        mult *= 10;
        n /= 2;
    }

    printf("Binario: %d\n", bin);
    
    return 0;
}