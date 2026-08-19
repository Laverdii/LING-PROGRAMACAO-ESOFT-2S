#include <stdio.h>
#include <stdlib.h>

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
	
	velocidade_m = velocidade_km / 3,6;
	
	printf("A velocidade em m/s e: %.2f\n", velocidade_m);
	return 0;
}
