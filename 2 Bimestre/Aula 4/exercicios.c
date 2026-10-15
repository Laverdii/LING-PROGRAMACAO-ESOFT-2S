#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex1();
void ex2();
void ex3();

// Exercício 1. "Elabore um programa que permita a entrada de 3 valores. E conte do primeiro valor inserido, até o o segundo valor, com o passo da contagem dado pelo terceiro valor."
// ex: 1, 8, 2 >> contar de 1 a 8, com passo 2 = 3, 5, 7.
void ex1(){
    int n1, n2, r;
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

// Exercício 2. "Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida."
// S = 1/2; 1/4; 1/8; 1/16... N
void ex2(){
    int pos, i;
    float soma = 0;

    printf("Informe um numero para realizar a soma da sequencia ate entao: ");
    scanf("%d", &pos);

    for(i=2; i <= pow(2, pos); i *= 2){
        soma += 1.0/i;
    }
    printf("%f", soma);
}


// Exercício 3. "Faça um programa que exiba na tela o triÂngulo de pascal."
void ex3(){
    int linhas, i, j, valor;


    printf("Informe a quantidade de linhas que o triangulo deve ter: ");
    scanf("%d", &linhas);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < linhas - i - 1; j++) {
            printf(" ");
        }

        valor = 1;

        for (j = 0; j <= i; j++) {
            printf("%d ", valor);
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n");
    }
}

int main() {
    int opcao;
    
    while(opcao != 4){
        printf("Qual exercicio deseja realizar? 1 | 2 | 3 | 4 (sair)\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                printf("\nEncerrando programa...");
                break;
            default:
                printf("Digite um exercicio válido");
                exit(1);
                break;
            }
        }
    return 0;
}   