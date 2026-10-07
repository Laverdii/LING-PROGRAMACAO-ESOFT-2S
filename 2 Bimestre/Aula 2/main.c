#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valor[10];
    int i, maior, menor;

    // para(inicial; condição; incremento(-- ou ++))

   printf("Digite 10 numeros para o computador ler\n");
   for(i = 0; i < 100; i++){
    scanf("%d", &valor[i]);
   }

   printf("Numeros digitados: ");
   for(i = 0; i < 10; i++){
    printf("%d ", valor[i]);
   }
    return 0;
}