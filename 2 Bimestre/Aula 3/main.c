#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// "Elabore um progrma que peça ao usuário para digitar 10 numeros que sejam inteiros positivos, e ignore os negativos e nulos. E mostre na tela o resultado da soma e a média desses valores -- OBS: não precisa usar vetor, usem os laços da aula de hoje; while e do-while"

int main(){
    int num, i, opcao;
    float soma;

    while (opcao != 3){
        printf("\nQuer resoler com:\n1 - While\n2 - Do-While\n3 - Sair\n");
        scanf("%d", &opcao);
    

        switch (opcao){
        case 1:
            soma = 0;
            i = 0;
            while (i < 10){
                printf("Digite 10 valores para descobrir o resultado da soma deles, e sua media: ");
                scanf("%d", &num);
                if (num > 0){
                    soma += num;
                    i++;
                }
            }

            printf("a soma eh %.2f\n", soma);
            printf("A media eh %.2f", soma / 10);
            break;

        case 2:
            soma = 0;
            i = 0;
            do {
                printf("Digite 10 valores para descobrir o resultado da soma deles, e sua media: ");
                scanf("%d", &num);
                if (num > 0){
                    soma += num;
                    i++;
                }
            } while (i < 10);

            printf("a soma eh %.2f\n", soma);
            printf("A media eh %.2f", soma / 10);
            break;
        case 3:
            printf("Encerrando...");
        }
    }
    return 0;
}