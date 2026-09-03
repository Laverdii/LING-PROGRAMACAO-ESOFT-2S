#include <stdio.h>
#include <stdlib.h>

/* Tipo nome (Lista de parametros) {
    comandos...
}
*/
void exec2() {
    // "Faça um programa que leia um valor em reais e a cotação do dolár. Em seguida imprima o valor em dolár."
    float real, dolar;

    printf("Conversor de reais para dolares, insira um valor em reais: ");
    scanf("%f", &real);
    dolar = real / 5.19;
    printf("Com a quantia de %.2f reais, convertendo para dolares voce tem %.2f", real, dolar);
}

void exec3() {
    // "Faça um programa que leia um valor inteiro, que é o tempo de duração em segundos de um evento, e depois coloque no formato horas:minutos:segundos."
    int duracao_seg, resto_seg, duracao_min, resto_min, duracao_hora;

    printf("Insira a duraçao do evento em segundos: ");
    scanf("%d", &duracao_seg);

    resto_min = duracao_seg % 3600;
    duracao_hora = duracao_seg / 3600;
    resto_seg = resto_min % 60;
    duracao_min = resto_min / 60;

    printf("%d, %d, %d", duracao_hora, duracao_min, resto_seg);
}

void exec8() {
    // "Faça um programa que leia um valor em Celsius e converta para Fahrenheit"
    float celsius, fahrenheit;

    printf("Digite um valor em Celsius para ser convertido em Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura %.2f graus Celsius, em Fahrenheit seria: %.2f", celsius, fahrenheit);
}

int main(int argc, char *argv[]) {
    int opcao;
    printf("Insira qual exercicio quer resolver: |2|3|8|\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 2: 
        exec2();
        break;
    case 3:
        exec3();
        break;
    case 8:
        exec8();
        break;
    }
    return 0;
}