#include <stdio.h>
#include <stdlib.h>

float calcVPA (float val_emp, float quant_acoes) {
    return val_emp / quant_acoes;
}

float calcPVP (float preco_acao, float VPA) {
    return preco_acao / VPA;
}


void Ex1() {
    int A, B, C, D, aux;
    printf("Digite 4 valores para A, B, C, D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    aux = A;
    A = C;
    C = D;
    D = B;
    B = aux;

    printf("Agora a ordem sera C, A, D, B: %d, %d, %d, %d", A, B, C, D);
}
int main(int argc, char *argv[]) {
    float val_emp, quant_acoes, VPA, PVP, preco_acao;
    int opcao;
    printf("Exercicio 1 ou 2? ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        Ex1();
        break;
    case 2:
        printf("Qual valor patrimonial da empresa (R$): ");
        scanf("%f", &val_emp);
        printf("Quantidade de acoes disponiveis: ");
        scanf("%f", &quant_acoes);
        printf("Preco da acao (R$): ");
        scanf("%f", &preco_acao);

        VPA = calcVPA(val_emp, quant_acoes);
        PVP = calcPVP(preco_acao, VPA);

        if (PVP < 0.0) {
        printf("Classificacao: Pessima");
        } else if (PVP >= 0.0 && PVP < 0.8) {
        printf("Classificacao: Otima");
        } else if (PVP >= 0.8 && PVP <= 1.2) {
        printf("Classificacao: Indiferente");
        } else if (PVP > 1.2 && PVP <= 2.0) {
        printf("Classificacao: Boa");
        } else if (PVP > 2.0) {
        printf("Classificacao: Ruim");
        } else {
            printf("Algo deu errado...");
        }   
    }
    return 0;
}