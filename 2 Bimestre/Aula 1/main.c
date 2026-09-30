#include <stdio.h>
#include <stdlib.h>

int verifica(int n);

int verifica(int n) {
    if ((n % 2) == 1) {
        if((n % 5) == 0) {
            return 1;
        }
    } else return 0;
}

void ex0() {
    int cap, q_itens, bolsas;

    printf("Insira quantidade de itens que o legendario tem: ");
    scanf("%d", &q_itens);
    printf("Insira a capacidade das bolsas do legendario: ");
    scanf("%d", &cap);

    bolsas = q_itens/cap;

    printf("O legendario precisa de %d mochilas para seus itens", bolsas);
}

void ex1() {
}

int main(int argc, char *argv[]) {
    
    return 0;
}