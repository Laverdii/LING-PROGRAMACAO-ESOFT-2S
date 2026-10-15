#include <stdio.h>
#include <stdlib.h>

void ex1();
void ex2();
void ex3();

void ex1(){
    int n1, n2, r;
    // Exercício 1. "Elabore um programa que permita a entrada de 3 valores. E conte do primeiro valor inserido, até o o segundo valor, com o passo da contagem dado pelo terceiro valor."
    // ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7.
    printf("Insira 3 valores, para contar do primeiro ao segundo, e o terceiro sendo a razao: ");
    scanf("%d %d %d", &n1, &n2, &r);

    if(n1<n2){
        while(n1<n2){
            printf("%d ", n1);
            n1 += r;
        }
    } else if(r == 0){
        printf("Digite uma razão valida.\n");
    } else{
        while(n1>n2){
            if (n1>n2)printf("%d ", n1);
            n1 += r;
        }
    }
}

int main() {
    // Exercício 2. "Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida."
    // S = 1/2; 1/4; 1/8; 1/16... N
    


    // Exercício 3. "Faça um programa que exiba na tela o triÂngulo de pascal."
    return 0;
}