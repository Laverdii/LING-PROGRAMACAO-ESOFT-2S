#include <stdio.h>
#include <stdlib.h>

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
	notacao2 = 178293892;
	printf("Numero em notaçao cientifica: %.2e\n", notacao2);
	
	// 3. "Faça um programa que leia um número decimal e transforme em binário"
	int num3, div13, div23, div33, div43, div53, div63, div73, resto3, resto13, resto23, resto33, resto43, resto53, resto63;
	printf("\nEXERCICIO 3\n");
	printf("Digite um numero inteiro para ser convertido a binario(maximo 100): ");
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
	
	
	printf("%d%d%d%d%d%d%d", resto63, resto53, resto43, resto33, resto23, resto13, resto3);
	return 0;
}
