#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0


int main(int argc, char *argv[]) {
    srand(time(NULL));
    int casaX, casaY, i, j;
    int campo[9][9];

    for (i=0; i<9; i++){
        for(j=0;j<9;j++){
            campo[i][j] = 9;
        }
    }
    // Preenche o campo minado com bombas.
    for (i=0; i<9; i++){
        for(j=0;j<9;j++){
            if (rand()%10 == 0){
                campo[i][j] = 0;
            }
        }
    }
    printf("Campo Minado \n---------------------------- \n");
    for (i=0; i<9; i++){
        for(j=0;j<9;j++){
            if (printf("|%d", campo[i][j]))printf("|9");
            else printf("|%d", campo[i][j]);
        }
        printf("|\n");
    }
    return 0;
}