#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor)
{
    return dig * valor;
}

void exec1()
{
    // 1. "Faça um programa que valide um CPF."
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, soma, resto1, resto2;

    printf("Insira um cpf para validação: ");
    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
    soma = multDigito(num1, 10) + multDigito(num2, 9) + multDigito(num3, 8) + multDigito(num4, 7) + multDigito(num5, 6) + multDigito(num6, 5) + multDigito(num7, 4) + multDigito(num8, 3) + multDigito(num9, 2);
    soma *= 10;
    resto1 = soma % 11;
    if (resto1 == 10)
        resto1 = 0;

    soma = multDigito(num1, 11) + multDigito(num2, 10) + multDigito(num3, 9) + multDigito(num4, 8) + multDigito(num5, 7) + multDigito(num6, 6) + multDigito(num7, 5) + multDigito(num8, 4) + multDigito(num9, 3) + multDigito(num10, 2);
    soma *= 10;
    resto2 = soma % 11;
    if (resto2 == 10)
        resto2 = 0;

    if (resto1 == num10 && resto2 == num11)
    {
        printf("O CPF com final: %1d%1d, eh valido", num10, num11);
    }
    else
    {
        printf("O CPF com final: %1d%1d, eh invalido", num10, num11);
    }
}

void exec2()
{
    // 2. "Faça um programa que identifique a grandeza, e converta de C para F e vice versa"
    int unidade;
    float c, f;

    printf("Qual unidade quer utilizar (1 para C/2 para F): ");
    scanf(" %d", &unidade);

    if (unidade == 1)
    {
        printf("Digite o número em graus Celsius a ser convertido: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Com %.1f graus Celsius, se tem %.1f graus Fahrenheit.", c, f);
    }
    else if (unidade == 2)
    {
        printf("Digite o número em graus Fahrenheit a ser convertido: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Com %.1f graus Fahrenheit, se tem %.1f graus Celsius.", f, c);
    }
}
int main(int argc, char *argv[])
{
    int opcao;

    printf("Qual exercicio quer resolver: |1|2|3|5|6|7|8|9|10| ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        exec1();
        break;
    case 2:
        exec2();
        break;
        /*
     case 4:
        exec4();
        break;
     case 5:
        exec5();
        break;
     case 6:
        exec6();
        break;
     case 7:
        exec7();
        break;
     case 8:
        exec8();
        break;
     case 9:
        exec9();
        break;
     case 10:
        exec10();
        break; */
    }
    return 0;
}