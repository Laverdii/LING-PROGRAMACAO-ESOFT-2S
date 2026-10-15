#include <stdio.h>
#include <stdlib.h>
// Relembrando algumas estruturas que vimos essa semana...

int main() {
    int i, j, k, n, r;

    // "Laço FOR repete um conjunto de instruções, de um valor inicial(inicialização), até uma determinada condição, realizando uma operação (incremento) a cada execução [sempre]."

    for(i=0, j=1; i<10; i++, j--){
        printf("esse e o laço for");
    }

    // "Laço WHILE (enquanto), que testa se uma condição é verdadeira, caso seja executa um bloco de comandos repetindo o processo enquanto a condição for avaliada como verdadeira."

    while(i<10){
        printf("%d, laco WHILE", i);
        if(n%2 == 0)i++;
    }

    // "Laço DO WHILE, semelhante ao laço while, porém antes de realizar a verificação ele executa o conjunnto de instruções para após a execução realizar a verificação da condição.
    
    do{
        printf("%d, laco DO", i);
        if(n%2 == 0) i++;
        n++;
    } while (i<10);

    return 0;
}