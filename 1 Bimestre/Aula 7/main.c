#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b, c, r, num1;

    printf("Entre com os valores para A, B e C\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        r = a;
    } else{
        r = b;
    }
    if (c>r){
        r = c;
    }
    printf ("%d eh o maior\n", r);


    printf("\nDigite um valor para verificar sua paridade: \n");
    scanf("%d", &num1);

    if (num1 % 2 == 0){
        printf("Seu numero eh par");
    } else {
        printf("Seu numero eh impar");
    } // Pode se também fazer em uma só linha quando é executado um só comando
    return 0;
}
