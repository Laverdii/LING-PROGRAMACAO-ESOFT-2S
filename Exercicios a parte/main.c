#include <stdio.h>
#include <stdlib.h>

// todos códigos são feitos a mão sem auxilio de IA

void ex1();
void ex2();
void ex3();
void ex4();


void ex1(){
    // 1. "Faça um programa que leia 10 numeros em um vetor e organize crescentemente."
    int vetor[10], i, j, aux, trocou = 0;

    printf("Digite os valores do vetor (10): ");
    for(i = 0;i<10;i++){
        scanf("%d", &vetor[i]);    
    }
    for(i = 0;i<10;i++){
        printf("%d |", vetor[i]);
    }

    for(i=0;i<9;i++){
        trocou = 0;
        for(j=0;j<9-i;j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                trocou=1;
            }
        }
        if(trocou == 0){
            break;
        }
    }

    printf("\n \n");

    for(i = 0;i<10;i++){
        printf("%d |", vetor[i]);
    }
}

void ex2(){
    int vetor[8], i;

    printf("Digite os valores do vetor: \n");
    for(i=0;i<8;i++){
        scanf("%d", &vetor[i]);
    }
    printf("\nMostrando vetor de maneira normal: ");
    for(i=0;i<8;i++){
        printf("%d", vetor[i]);
    }

    printf("\nMostrando vetor de maneira invertida: ");
    for(i=7;i>=0;i--){
        printf("%d", vetor[i]);
    }
}

void ex3(){
    float vetor[10], soma=0, media=0;
    int i;

    printf("Digite os numeros do vetor: \n");
    for(i=0; i<10;i++){
        scanf("%f", &vetor[i]);
    }
    printf("\nMostrando vetor de maneira normal:");
    for(i=0;i<10;i++){
        printf(" %.2f |", vetor[i]);
    }

    for(i=0;i<10;i++){
        soma += vetor[i];
    }
    media = soma / 10;
    printf("\nOs valores da soma e media sao respectivamente: %.2f | %.2f", soma, media);
}

void ex4(){
    int vetor[12], i, contador=0, j=0;

    printf("Digite os numeros do vetor: \n");
    for(i=0; i<12;i++){
        scanf("%d", &vetor[i]);
    }
    printf("\nMostrando vetor de maneira normal:");
    for(i=0;i<12;i++){
        printf(" %d |", vetor[i]);
    }

    for(i=0;i<12;i++){
        if(vetor[i] % 2 == 0){
            contador++;
        }
    }
    printf("\nEssa e a quantida de numeros pares: %d", contador);
    int pares[contador];

    for(i=0;i<12;i++){
        if(vetor[i] % 2 == 0){
            pares[j] = vetor[i];
            j++;
        }
    }

    printf("\n \nEsse sao os numeros pares:");
    for(i=0;i<contador;i++){
        printf(" %d |", pares[i]);
    }
}


int main() {
    ex4();
    return 0;
}