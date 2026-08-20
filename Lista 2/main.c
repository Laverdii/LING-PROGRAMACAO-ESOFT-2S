#include <stdio.h>
#include <stdlib.h>
#define pi 3.131592

int main(int argc, char *argv[]) {
	// 1. "Faça um programa que calcule o ano de nascimento com a idade e do ano atual."
	int ano_nasc, ano_atual, idade;

	printf("EXERCICIO 1\n");
	printf("Digite sua idade ao final do ano: ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	ano_nasc = ano_atual - idade;
	
	printf("O seu ano de nascimento e: %d\n", ano_nasc);
	
	// 2. "Faça um programa que leia a velocidade em km/h, e converta em m/s"
	printf("\nEXERCICIO 2\n");

	float velocidade_km, velocidade_m;
	
	printf("Digite a velocidade em km/h a ser convertida: ");
	scanf("%f", &velocidade_km);
	
	velocidade_m = velocidade_km / 3.6;
	
	printf("A velocidade em m/s e: %.2f\n", velocidade_m);

	// 3. "Faça um programa que leia um valor em reais e a cotação do dolár. Em seguida imprima o valor em dolár."
	printf("\nEXERCICIO 3\n");

	float real, dolar;

	printf("Conversor de reais para dolares, insira um valor em reais: ");
	scanf("%f", &real);
	dolar = real / 5.19;
	printf("Com a quantia de %.2f reais, convertendo para dolares voce tem %.2f", real, dolar);

	// 4. "Faça um programa que leia um valor em Celsius e converta para Fahrenheit"
	printf("\nEXERCICIO 4\n");

	float celsius, fahrenheit;

	printf("Digite um valor em Celsius para ser convertido em Fahrenheit: ");
	scanf("%f", &celsius);

	fahrenheit = celsius * (9.0/5.0) + 32.0;

	printf("A temperatura %.2f graus Celsius, em Fahrenheit seria: %.2f", celsius, fahrenheit);

	// 5. "Faça um programa que leia o ângulo em graus e apresente-o convertido em radianos."
	printf("\nEXERCICIO 5\n");
	float g, r;
	printf("Insira um valor de um angulo em graus para ser convertido a radianos: ");
	scanf("%f", &g);
	r = g * pi/180;
	printf("Com o angulo em %f graus, seu valor em radianos e: %.2f", g, r);

	// 6. "Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor."
	printf("\nEXERCICIO 6\n");
	int num_inteiro, sucessor, antecessor;

	printf("Digite um número para descobrir seu sucessor e antecessor: ");
	scanf("%d", &num_inteiro);

	sucessor = num_inteiro + 1;
	antecessor = num_inteiro - 1;

	printf("O seu número %d, tem um sucessor de: %d; e um antecessor de: %d", num_inteiro, sucessor, antecessor);

	// 7. "Faça um programa que divida 780 mil em 3 partes (46%, 32% e 22%)."
	printf("\nEXERCICIO 7\n");

	float premio, primeiro, segundo, terceiro;

	premio = 780000;
	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * 0.22;

	printf("O primeiro lugar do concurso ira receber a premiacao de: %.2f; seguido do segundo lugar recebendo: %.2f; e o terceiro: %.2f");

	// 8. "Faça um programa que leia um valor inteiro, que é o tempo de duração em segundos de um evento, e depois coloque no formato horas:minutos:segundos"

	// 10. "Faça um programa que leia três valores e apresente o maior dos três."
	printf("\nEXERCICIO 10\n");

	int a, b, c, maior, maior_temp;

	printf("Insira os valores para comparar: ");
	scanf("%d %d %d", &a, &b, &c);

	maior_temp = (a+b+abs(a-b))/2;
	maior = (maior_temp+c+abs(maior_temp-c))/2;

	printf("O maior entre os 3 valores |%d|%d|%d| = %d", a, b, c, maior);
	return 0;
}
