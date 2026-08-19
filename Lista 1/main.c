#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	// 1. "Faça um programa que leia os números e os imprima inversamente como foram lidos.
	int a1,b1;

	printf("EXERCICIO 1\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &a1);

	printf("Mais um: ");
	scanf("%d", &b1);

	printf("Agora eles serao mostrados de forma inversa ao como foram lidos: %d e %d\n", b1, a1);
	
	
	// 2. "Faça que um número double seja imprimido em notação cientifica"
	double notacao2;

	printf("\nEXERCICIO 2\n");
	printf("Digite um numero para ser transformado em notacao cientifica: ");
	scanf("%lf", &notacao2);	

	printf("Numero em notacao cientifica: %.2e\n", notacao2);
	
	// 3. "Faça um programa que leia um número decimal e transforme em binário"
	int num3, div13, div23, div33, div43, div53, div63, resto3, resto13, resto23, resto33, resto43, resto53, resto63;

	printf("\nEXERCICIO 3\n");
	printf("Digite um numero inteiro para ser convertido a binario(maximo 127): ");
	scanf("%d", &num3);
	resto3 = num3 % 2; //resto 1
	
	div13 = num3 / 2;
	resto13 = div13 % 2; //resto 2
	
	div23 = div13 / 2;
	resto23 = div23 % 2; //resto 3
	
	div33 = div23 / 2;
	resto33 = div33 % 2; //resto 4
	
	div43 = div33 / 2;
	resto43 = div43 % 2; //resto 5
	
	div53 = div43 / 2;
	resto53 = div53 % 2; //resto 6
	
	div63 = div53 / 2;
	resto63 = div63 % 2; //resto 7
	
	
	printf("%d%d%d%d%d%d%d\n", resto63, resto53, resto43, resto33, resto23, resto13, resto3);

    // 4. "Faça um programa que leia o salário fixo e o valor total de vendas, mostre o salario final sabaneo que o vendedor ganha em cima das vendas (15%) de comissão."
    float sal, vendas, comissao, salTotal;

	printf("\nEXERCICIO 4\n");
    printf("Qual o salario fixo do vendedor?\n");
    scanf("%f", &sal);

    printf("Qual o valor total de vendas realizadas?\n");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salTotal = sal + comissao;

    printf("O salario total do vendedor e: %.2f\n", salTotal);
    

    // 5. "Faça um programa que leia 4 valores, e mostre na tela a soma, a média e o produtório desses valores."
    printf("\nEXERCICIO 5\n");

    float val1, val2, val3, val4, soma, media, produtorio;

	printf("Digite quatro valores, para descobrir sua soma, media e produtorio.\n");
	scanf("%f %f %f %f", &val1, &val2, &val3, &val4);

	soma = val1 + val2 + val3 + val4;
	media = (val1 + val2 + val3 + val4) / 4;
	produtorio = (((val1 * val2) * val3) * val4);

	printf("\nA soma dos valores e: %.2f", soma);
	printf("\nA media dos valores e: %.2f", media);
	printf("\nO produtorio dos valores e: %.2f\n", produtorio);

	// 6. "Faça um programa que leia a idade de uma pessoa em dias, e retorne em anos, meses e dias (12, 30, 365)"
	printf("\nEXERCICIO 6\n");
	int idade_dias, anos, meses, dias, resto;
	printf("Digite sua idade em dias para calcula-la em anos meses e dias: ");
	scanf("%d", &idade_dias);
	anos = idade_dias / 365;
	resto = idade_dias % 365; // 145
	meses = resto / 30 ; // 455
	dias = resto % 30;
	printf("Voce tem: %d anos, %d meses e %d dias.", anos, meses, dias);

	// 7. "Faça um programa que calcule e mostre o volume de uma esfera a partir do raio."
	double raio, volume;
	printf("\nEXERCICIO 7\n");
	printf("Digite o raio de uma esfera para descobrir seu volume: ");
	scanf("%lf", &raio);

	volume = (4.0/3) * pi * (pow(raio, 3));

	printf("O volume da esfera e: %.2lfm^3\n", volume);

	// 8. "Faça um programa que leia as 4 coordenadas de um plano cartesiano e calcule a distancia euclediana entre eles"
	float x1, x2, y1, y2, distancia;

	printf("\nEXERCICIO 8\n");
	printf("Digite os valores de x1 e y1: ");
	scanf("%f %f", &x1, &y1);

	printf("Digite os valores de x2 e y2: ");
	scanf("%f %f", &x2, &y2);

	distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

	printf("A distancia entre os pontos e de: %.2f", distancia);
	return 0;
}
