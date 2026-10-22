#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Faça um programa que leia uma palavra e verifique se ela e um palindromo

    entrada: ABBA
    saida: é um palindromo

    um palindromo e uma palavra frase ou numero que pode ser lido da esquerda para a direita ou da direita para a esquerda mantendo exatamento o mesmo sentido
*/

int main() {
    char palin[33];
    int tamanho, verifica, i;

    printf("Digite uma palavra ou frase: ");
    scanf("%32s", palin);

    for(i=0; i<33 && palin[i] != '\0'; i++);

    for(tamanho = i-1, i=0; i<tamanho; i++, tamanho--){
        if (palin[i] == palin[tamanho]){
            verifica = 1;  
        } else {
            verifica = 0;
            break;
        }
    }
    
    if(verifica == 1){
        printf("Sua palavra %s, eh um palindromo.", palin);
    } else printf("Nao eh um palindromo.");
    return 0;
}