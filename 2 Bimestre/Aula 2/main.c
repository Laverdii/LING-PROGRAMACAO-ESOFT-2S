#include <stdio.h>
#include <stdlib.h>

// "Faça um programa que leia 10 números e mostre o maior entre os 5 primeiros e o menor entre os restantes."

int compara(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int compara_menor(int a, int b){
    if(a > b){
        return b;
    } else {
        return a;
    }
}

int main() {
    int valor[10];
    int i, maior, menor; 

    // para(inicial; condição; incremento(-- ou ++))

   printf("Digite 10 numeros para o computador ler\n");
   for(i = 0; i < 10; i++){
    scanf("%d", &valor[i]);
   }

   for(i = 1, maior = valor[0]; i < 5; i+=2){
    int temp = compara(valor[i], valor[i+1]);
    maior = compara(maior, temp);
   }

   for (i = 6, menor = valor[5]; i < 10; i+=2){
    int temp = compara_menor(valor[i], valor[i+1]);
    menor = compara_menor(menor, temp);
   }

   printf("Maior entre os 5 primeiros numeros digitados: %d\n", maior);
   printf("Menor entre os restantes: %d", menor);
   
    return 0;
}