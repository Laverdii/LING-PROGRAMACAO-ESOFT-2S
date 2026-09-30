#include <stdio.h>
#include <stdlib.h>
#define pi 3.131592

void exec1() {
    // 1. "Faça um programa que calcule o ano de nascimento com a idade e do ano atual."
	int ano_nasc, ano_atual, idade;

	printf("EXERCICIO 1\n");
	printf("Digite sua idade ao final do ano: ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	ano_nasc = ano_atual - idade;
	
	printf("O seu ano de nascimento e: %d\n", ano_nasc);
}

void exec2() {
    // 2. "Faça um programa que leia um valor em reais e a cotação do dolár. Em seguida imprima o valor em dolár."
    float real, dolar;

    printf("Conversor de reais para dolares, insira um valor em reais: ");
    scanf("%f", &real);
    dolar = real / 5.19;
    printf("Com a quantia de %.2f reais, convertendo para dolares voce tem %.2f", real, dolar);
}

void exec3() {
    // 3. "Faça um programa que leia um valor inteiro, que é o tempo de duração em segundos de um evento, e depois coloque no formato horas:minutos:segundos."
    int duracao_seg, resto_seg, duracao_min, resto_min, duracao_hora;

    printf("Insira a duraçao do evento em segundos: ");
    scanf("%d", &duracao_seg);

    resto_min = duracao_seg % 3600;
    duracao_hora = duracao_seg / 3600;
    resto_seg = resto_min % 60;
    duracao_min = resto_min / 60;

    printf("%d, %d, %d", duracao_hora, duracao_min, resto_seg);
}

void exec4() {
// 4. "Faça um programa que leia um valor em Celsius e converta para Fahrenheit"
	printf("\nEXERCICIO 4\n");

	float celsius, fahrenheit;

	printf("Digite um valor em Celsius para ser convertido em Fahrenheit: ");
	scanf("%f", &celsius);

	fahrenheit = celsius * (9.0/5.0) + 32.0;

	printf("A temperatura %.2f graus Celsius, em Fahrenheit seria: %.2f", celsius, fahrenheit);
}

void exec5() {
// 5. "Faça um programa que leia o ângulo em graus e apresente-o convertido em radianos."
	printf("\nEXERCICIO 5\n");
	float g, r;
	printf("Insira um valor de um angulo em graus para ser convertido a radianos: ");
	scanf("%f", &g);
	r = g * pi/180;
	printf("Com o angulo em %f graus, seu valor em radianos e: %.2f", g, r);
}

void exec6() {
// 6. "Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor."
	printf("\nEXERCICIO 6\n");
	int num_inteiro, sucessor, antecessor;

	printf("Digite um número para descobrir seu sucessor e antecessor: ");
	scanf("%d", &num_inteiro);

	sucessor = num_inteiro + 1;
	antecessor = num_inteiro - 1;

	printf("O seu número %d, tem um sucessor de: %d; e um antecessor de: %d", num_inteiro, sucessor, antecessor);
}

void exec7() {
// 7. "Faça um programa que divida 780 mil em 3 partes (46%, 32% e 22%)."
	printf("\nEXERCICIO 7\n");

	float premio, primeiro, segundo, terceiro;

	premio = 780000;
	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * 0.22;

	printf("O primeiro lugar do concurso ira receber a premiacao de: %.2f; seguido do segundo lugar recebendo: %.2f; e o terceiro: %.2f");
}

void exec8() {
    // 8. "Faça um programa que leia um valor em Celsius e converta para Fahrenheit"
    float celsius, fahrenheit;

    printf("Digite um valor em Celsius para ser convertido em Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura %.2f graus Celsius, em Fahrenheit seria: %.2f", celsius, fahrenheit);
}

void exec9() {
// 9. "Faça um programa que calcule mostre a quantidade de gasolina consumida."
	printf("\nEXERCICIO 9\n");

	float v_media, d_percorrida, h_viagem, g_necessaria;

	printf("Qual o tempo gasto na viagem (horas): ");
	scanf("%f", &h_viagem);
	printf("Qual a velocidade media da viagem(km/h): ");
	scanf("%f", &v_media);
	d_percorrida = v_media * h_viagem;
	g_necessaria = d_percorrida / 12;

	printf("Em uma viagem de %.1f km, a %.0f km/h, voce gastaria %.3f litros de gasolina.", d_percorrida, v_media, g_necessaria);
}

void exec10() {
    // 10. "Faça um programa que leia três valores e apresente o maior dos três."
	printf("\nEXERCICIO 10\n");

	int a, b, c, maior, maior_temp;

	printf("Insira os valores para comparar: ");
	scanf("%d %d %d", &a, &b, &c);

	maior_temp = (a+b+abs(a-b))/2;
	maior = (maior_temp+c+abs(maior_temp-c))/2;

	printf("O maior entre os 3 valores |%d|%d|%d| = %d", a, b, c, maior);
}

int main(int argc, char *argv[]) {
    int opcao;
    printf("Qual exercicio quer resolver: |1|2|3|4|5|6|7|8|9|10|");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
	exec1();
    break;

    case 2:
    exec2();
    break;
    
    case 3:
    exec3();
    break;
    
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
    break;
    }
	return 0;
}