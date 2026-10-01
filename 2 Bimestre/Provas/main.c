#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funções tipadas

int verifica(int n);
int verifica_igualdade(int a, int b, int c);

int verifica(int n){
    if((n % 2) == 1){
        if((n % 5) == 0) {
            return 1;
        }
    }
    return 0;
}

int verifica_igualdade(int a, int b, int c){
    if(a == b || a == c || b == c){
        return 1;
    }
    return 0;
}

// Funções void

void prova1();
void prova1_ex0();
void prova1_ex1();
void prova1_ex2();
void prova2();
void prova2_ex0();
void prova2_ex1();
void prova2_ex2();
void prova3();
void prova3_ex0();
void prova3_ex1();
void prova3_ex2();

// PROVA 1

void prova1_ex0(){
    int num1, num2, num3, num4;

    printf("Digite os 4 valores a verificar: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    if(verifica(num1) == 1){
        printf("%d\n", num1);
    }
    if(verifica(num2) == 1){
        printf("%d\n", num2);
    }
    if(verifica(num3) == 1){
        printf("%d\n", num3);
    }
    if(verifica(num4) == 1){
        printf("%d\n", num4);
    }
}


void prova1_ex1(){
    int capacidade, bolsa, q_itens;

    printf("Quantos itens o legendario esta levando?\n");
    scanf("%d", &q_itens);
    printf("Qual a capacidade da bolsa do legendario?\n");
    scanf("%d",&capacidade);

    bolsa = q_itens / capacidade;

    printf("O legendario consegue preencher totalmente %d mochilas com essa capacidade.", bolsa);
}

void prova1_ex2(){
    float valor, resultado;
    int codigo_conv, codigo_val;

    printf("Qual valor que quer converter?\n");
    scanf("%f", &valor);
    printf("Qual unidade de medida do seu valor? (De acordo com a tabela)\n");
    scanf("%d", &codigo_val);
    printf("Para qual unidade de medida quer converter? (de acorado com a tabela)\n");
    scanf("%d", &codigo_conv);
    
    if (codigo_val == 1 && codigo_conv == 2) {
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f Fahrenheit\n", resultado);
    } else if (codigo_val == 2 && codigo_conv == 1) {
        resultado = (valor - 32) / 1.8;
        printf("Resultado: %.2f Celsius\n", resultado);
    } else if (codigo_val == 1 && codigo_conv == 3) {
        resultado = valor + 273.15;
        printf("Resultado: %.2f Kelvin\n", resultado);
    } else if (codigo_val == 3 && codigo_conv == 1) {
        resultado = valor - 273.15;
        printf("Resultado: %.2f Celsius\n", resultado);
    } else if (codigo_val == 4 && codigo_conv == 5) {
        resultado = valor / 1609.34;
        printf("Resultado: %.2f milhas\n", resultado);
    } else if (codigo_val == 5 && codigo_conv == 4) {
        resultado = valor * 1609.34;
        printf("Resultado: %.2f metros\n", resultado);
    } else if (codigo_val == 8 && codigo_conv == 9) {
        resultado = valor * 2.205;
        printf("Resultado: %.2f libras\n", resultado);
    } else if (codigo_val == 9 && codigo_conv == 8) {
        resultado = valor / 2.205;
        printf("Resultado: %.2f quilogramas\n", resultado);
    } else if (codigo_val == 10 && codigo_conv == 11) {
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph\n", resultado);
    } else if (codigo_val == 11 && codigo_conv == 10) {
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h\n", resultado);
    }
    else {
        printf("Numero digitado invalido.\n");
    }
}

void prova1(){  
    int opcao;

    printf("Qual exercicio deseja realizar? 0 | 1 | 2\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 0:
        prova1_ex0();
        break;
    case 1:
        prova1_ex1();
        break;
    case 2:
        prova1_ex2();
        break;
    }
}

// PROVA 2

void prova2_ex0(){
	int cap, q_itens, bolsa, resto;
    
    printf("Insira a quantidade de itens:\n");
    scanf("%d",&q_itens);
    printf("Insira a capacidade de itens de cada mochila:\n");
    scanf("%d",&cap);
    
    bolsa = q_itens/cap;
    resto = q_itens%cap; 
    
    printf("O legendario vai preencher totalmente %d mochilas, e sobrarao %d itens", bolsa, resto);
}

void prova2_ex1(){
	int a, b, c, temp;

    printf("Digite 3 numeros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (verifica_igualdade(a, b, c) == 1) {
        printf("Os numero tem que ser distintos");
    } else {
        printf("Seus numeros em ordem crescente sao: %d | %d | %d", a, b, c);
    }
}

void prova2_ex2(){
	int num1, num2, cod;
	
	printf("Digite dois numeros a serem comparados, e um codigo de acordo com a tabela para usar a comparaçao:\n");
	scanf("%d %d %d", &num1, &num2, &cod);
	
	switch(cod){
		case 1:
			if(num1>num2){
				printf("Verdadeiro");
			} else {
				printf("Falso");
			}
			break;
		case 2:
			if (num1 < num2) {
				printf("Verdadeiro");
			} else {
				printf("Falso");
			}
			break;
		case 3:
			if (num1 == num2){
				printf("Verdadeiro");
			} else {
				printf("Falso");
			}
			break;
		case 4:
			if (num1 != num2){
				printf("Verdadeiro");
			} else{
				printf("Falso");
			}
		default:
			printf("Operador invalido");
	}
	
}

void prova2(){
	int opcao;
	
	printf("Qual exercicio quer realizar? 0 (esoft A) | 1 (esoft B) | 2 (adsis)\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 0:
			prova2_ex0();
			break;
		case 1:
			prova2_ex1();
			break;
		case 2:
			prova2_ex2();
			break;
		default:
			printf("Numero invalido!");
			break;
	}
}

// PROVA 3

void prova3_ex0(){
    int num1, num2, num3, num4, num5;

    printf("Digite 5 numeros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("Consecutivos: ");
    if ((num1 + 1) == num2) {
        printf("%d %d ", num1, num2);
    }
    if ((num2 + 1) == num3) {
        printf("%d %d ", num2, num3);
    }
    if ((num3 + 1) == num4) {
        printf("%d %d ", num3, num4);
    }
    if ((num4 + 1) == num5) {
        printf("%d %d ", num4, num5);
    }
}

void prova3_ex1(){
    float imc, peso, altura;

    printf("De seu peso (kg) e altura (m) para calcular o IMC: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / pow(altura, 2);

    printf("Seu IMC e de: %.2f\n", imc);
    if (imc < 18.5){
        printf("Abaixo do peso\n");
    } else if((18.5 <= imc) <= 24.9){
        printf("Normal\n");
    } else if((25 <= imc) <=29.9){
        printf("Acima do peso\n");
    } else if(imc >= 30){
        printf("Obeso\n");
    } else {
        printf("Algo deu errado...");
    }
}

void prova3_ex2(){
    int a, b, c;

    printf("Inicio, dando valores aos pinos: A = 6 | B = 0 | C = 0\n");
    a = 6;
    b = 0;
    c = 0;

    a -= 1;
    c += 1;
    printf("Primeiro movimento: A = %d | B = %d | C = %d\n", a, b, c);
    
    a -= 2;
    b += 2;
    printf("Segundo movimento: A = %d | B = %d | C = %d\n", a, b, c);

    c -= 1;
    b += 1;
    printf("Terceiro movimento: A = %d | B = %d | C = %d\n", a, b, c);
    
    a -= 3;
    c += 3;
    printf("Quarto movimento: A = %d | B = %d | C = %d\n", a, b, c);
    
    b -= 1;
    a += 1;
    printf("Quinto movimento: A = %d | B = %d | C = %d\n", a, b, c);
    
    b -= 2;
    c += 2;
    printf("Sexto movimento: A = %d | B = %d | C = %d\n", a, b, c);
    
    a -= 1;
    c += 1;
    printf("Setimo movimento: A = %d | B = %d | C = %d\n", a, b, c);
    printf("Resultado final: A = %d | B = %d | C = %d com apenas 7 movimentos.", a, b, c);
}

void prova3(){
    int opcao;
	
	printf("Qual exercicio quer realizar? 0 | 1 | 2\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 0:
			prova3_ex0();
			break;
		case 1:
			prova3_ex1();
			break;
		case 2:
			prova3_ex2();
			break;
		default:
			printf("Numero invalido!");
			break;
	}
}

int main() {
    int opcao;
    printf("Qual prova deseja realizar? 1 (esoft A) | 2 (esoft B) | 3 (adsis)\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        prova1();
        break;
    case 2:
        prova2();
        break;
    case 3:
        prova3();
        break;
    default:
        printf("Numero invalido");
        break;
    }
    return 0;
}