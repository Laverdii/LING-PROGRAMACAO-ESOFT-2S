#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor)
{
    return dig * valor;
}

float calcINSS (float sal_bruto) { // 7. "Faça uma função que calcule o valor do desconto do INSS dependendo do salario."
    if (sal_bruto <= 1412.00) {
        return sal_bruto * 0.075;
    } else if (sal_bruto >= 1412.01 && sal_bruto <= 2666.68) {
        return sal_bruto * 0.09;
    } else if (sal_bruto >= 2666.69 && sal_bruto <= 4000.03) {
        return sal_bruto * 0.12;
    } else {
        return sal_bruto * 0.14;
    }
}

float calcIRPF(float sal_base) {
    if (sal_base <= 2259.20) {
        return 0;
    } else if (sal_base >= 2259.21 && sal_base <= 2826.65) {
        return (sal_base * 0.075) - 169.44;
    } else if (sal_base >= 2826.66 && sal_base <= 3751.05) {
        return (sal_base * 0.15) - 381.44;
    } else if (sal_base >= 3751.06 && sal_base <= 4664.68) {
        return (sal_base * 0.225) - 662.77;
    } else {
        return (sal_base * 0.275) - 896.00;
    }  
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

void exec3() {
    // 3. "Faça um programa que receba o nome de um aluno, e 3 notas dele, apos isso faça a media dele, e mostre o status aprovado, exame ou reprovado, se o status for exame diga quanto falta para ele ser aprovado."
    float nota1, nota2, nota3, media, faltando;
    char nome[30];
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Insira as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7 && media <= 10) {
        printf("\033[34mO aluno esta APROVADO com media de %.1f\033[0m", media);
    } else if (media >= 4 && media < 7) {
        faltando = 10 - media;
        printf("\033[33mO aluno esta em EXAME com media de %.1f, e faltam %.1f pontos para a aprovacao\033[0m", media, faltando);
    } else {
        printf("\033[31mO aluno esta REPROVADO com media de %.1f\033[0m", media);
    }
}

void exec9() {
    float h_trabalhada, h_mensal, sal_bruto, sal_base, sal_liquido, desconto_INSS, desconto_IRPF;

    printf("Digite o valor da sua hora trabalhada: R$");
    scanf("%f", &h_trabalhada);
    printf("Digite quantas horas trabalhou no mes: ");
    scanf("%f", &h_mensal);

    sal_bruto = h_trabalhada * h_mensal;

    desconto_INSS = calcINSS(sal_bruto);
    sal_base = sal_bruto - desconto_INSS;
    desconto_IRPF = calcIRPF(sal_base);
    sal_liquido = (sal_bruto - desconto_INSS) - desconto_IRPF;

    printf("Seu salario liquido e de: R$%.2f", sal_liquido);
}
int main(int argc, char *argv[])
{
    int opcao;
    float salario, desconto, salario_base, imposto;

    printf("Qual exercicio quer resolver: |1|2|3|5|6|7|8|9|\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        exec1();
        break;
    case 2:
        exec2();
        break;
     case 3:
        exec3();
        break;
        /*
     case 5:
        exec5();
        break;
     case 6:
        exec6();
        break;
        */
     case 7:
        printf("Digite seu salario, para calcularmos seu desconto do INSS: ");
        scanf("%f", &salario);
        desconto = calcINSS(salario);
        printf("Com seu salario de R$%.2f, voce tem um desconto de: R$%.2f", salario, desconto);
        break;
     case 8:
        printf("Digite seu salario base (salario bruto - INSS): ");
        scanf("%f", &salario_base);
        imposto = calcIRPF(salario_base);
        printf("Com um salario de R$%.2f, voce tem R$%.2f de imposto retido.", salario_base, imposto);
        break;
     case 9:
        exec9();
        break;
    }
    return 0;
}