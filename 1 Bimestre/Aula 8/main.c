#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num1, num2, soma, sub, divisao, mult, inv1, inv2;
    float a_triangulo, h_triangulo;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite mais um numero: ");
    scanf("%d", &num2);

    if (num1 >= 0 && num2 >= 0) { // verifica se o numero é positivo
        if (num1 < 10 && num2 < 10) { // verifica se e menor que 10
            if ((num1 && num2 == 2) || (num1 && num2 == 3) || (num1 && num2 == 5) || (num1 && num2 == 7)) { // verifica se é um numero primo
                a_triangulo = (num1 * num2) / 2;
                h_triangulo = sqrt(pow(num1, 2) + pow(num2, 2));
                printf("A area do triangulo formada pelos numeros e: %.2f\nA hipotenusa do triangulo dada pelos numeros e: %.2f", a_triangulo, h_triangulo);
            } else { // se nao forem primos mostram as somas basicas
                soma = num1 + num2;
                sub = num1 - num2;
                divisao = num1 / num2;
                mult = num1 * num2;
                printf("%d + %d = %d\n", num1, num2, soma);
                printf("%d - %d = %d\n", num1, num2, sub);
                printf("%d * %d = %d\n", num1, num2, mult);
                printf("%d / %d = %d\n", num1, num2, divisao);
            }
        } else { // se nao forem menor que 10 mostram se eles sao multiplos entre si
            if (num1 % num2 == 0) {
                printf("Os numeros sao multiplos entre si");
            } else {
                printf("Os numeros nao sao multiplos entre si");
            }
        }
    } else { // mostra o inverso dos numeros se o numero nao for positivo
        inv1 = num1 * (-1);
        inv2 = num2 * (-1);
        printf("O inverso de %d e %d, e: %d e %d", num1, num2, inv1, inv2);
    }
}