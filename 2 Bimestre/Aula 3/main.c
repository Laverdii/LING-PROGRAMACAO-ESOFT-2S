#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// "Elabore um progrma que peça ao usuário para digitar 10 numeros que sejam inteiros positivos, e ignore os negativos e nulos. E mostre na tela o resultado da soma e a média desses valores -- OBS: não precisa usar vetor, usem os laços da aula de hoje; while e do-while"

int main() {
    int num, i, soma, opcao;
    
    i = 0;
    while (i<10){
        printf("Digite 10 valores para descobrir o resultado da soma deles, e sua media: ");
        scanf("%d", &num);
        if(num > 0){
            soma += num;
            i++;
        }
    }

    printf("a soma eh %d\n", soma);
    printf("A media eh %f", soma/10);
    
    i = 0;
    do {
        printf("Digite 10 valores para descobrir o resultado da soma deles, e sua media: ");
        scanf("%d", &num);
        if(num > 0){
            soma += num;
            i++;
        }
    } while(i<10);
    printf("a soma eh %d\n", soma);
    printf("A media eh %f", soma/10);
    return 0;
}