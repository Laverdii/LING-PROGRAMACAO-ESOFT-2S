#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float areaC, raioC, areaT, hT, BASET, bT;
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &raioC);
	
	//area = pi . raio^2
	//area = M_PI*pow(raio,2);
	areaC = pi *(raioC*raioC);
	
	printf("A area do circulo de raio %.2f = %.2f", raioC, areaC);
	
	printf("\nAgora a area do trapezio. \n\nInsira a altura do trapezio: ");
	scanf("%f", &hT);
	printf("Insira as bases do trapezio, maior: ");
	scanf("%f", &BASET);
	printf("Menor: ");
	scanf("%f", &bT);

	
	areaT = ((BASET + bT) * hT)/2;
	
	printf("Um trapezio com as medidas de altura %.2f, base maior %.2f, base menor %.2f, tem a area de: %.2f", hT, BASET, bT, areaT);

	
	
	return 0;
}
