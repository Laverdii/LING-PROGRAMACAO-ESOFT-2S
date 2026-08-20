#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
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