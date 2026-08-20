#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("\nEXERCICIO 10\n");

	int a, b, c, d, maior, maior_temp1, maior_temp2;

	printf("Insira os valores para comparar: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	maior_temp1 = (a+b+abs(a-b))/2;
	maior_temp2 = (maior_temp1+c+abs(maior_temp1-c))/2;
    maior = (maior_temp2+d+abs(maior_temp2-d))/2;

	printf("O maior entre os 4 valores |%d|%d|%d|%d| = %d", a, b, c, d, maior);
    return 0;
}
