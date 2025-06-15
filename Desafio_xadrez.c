#include <stdio.h>
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;
int main (){
    printf("--- simulação de movimento de peças ---\n\n");

    printf("Movimentaçãodo bispo: \n ");
    for (int i = 1; i <= MOV_BISPO; i++){
    printf("Diagonal superior direita - passo%d\n", i);
    }
    printf("\n");

    printf("Movimentação da torre:\n");
    int passoTorre = 1;
    while (passoTorre <= MOV_TORRE) {
        printf("direita - passo %d\n", passoTorre);
        passoTorre++;
    }
    printf("\n");

    printf("movimentação da rainha: \n");
    int passoRainha = 1;
    do {
        printf(" Esquerda -passo %d\n", passoRainha);
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);
    printf("\n");

    printf("--- fim da simulação --- \n");
    return 0;

}