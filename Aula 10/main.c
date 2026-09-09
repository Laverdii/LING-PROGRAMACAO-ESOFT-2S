#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor){
    return dig*valor;
}

int main(int argc, char *argv[]) {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, soma, resto, resto2, digito1, digito2;

    printf("Insira um cpf para validação: ");
    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);

    soma = multDigito(num1, 10) + multDigito(num2, 9) + multDigito(num3, 8) + multDigito(num4, 7) + multDigito(num5, 6) + multDigito(num6, 5) + multDigito(num7, 4) + multDigito(num8, 3) + multDigito(num9, 2);

    soma *= 10;
    resto = soma % 11;
    if (resto == 10) resto = 0;
     printf("%d", resto);

    soma = multDigito(num1, 11) + multDigito(num2, 10) + multDigito(num3, 9) + multDigito(num4, 8) + multDigito(num5, 7) + multDigito(num6, 6) + multDigito(num7, 5) + multDigito(num8, 4) + multDigito(num9, 3) + multDigito(num10, 2);

    soma *= 10;
    resto2 = soma % 11;
    if (resto == 10) resto = 0;
    printf("%d", resto2);
    
    return 0;
}