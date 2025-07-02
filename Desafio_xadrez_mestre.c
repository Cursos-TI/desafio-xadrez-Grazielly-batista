#include <stdio.h>
const int MOV_BISPO = 5;    //5 casas na diagonal direita para cima
const int MOV_TORRE = 5;    //5 casas para direita
const int MOV_RAINHA = 8;   // 8 casas para esquerda
//Função recursivas para a movimentação de peças simples
void moverBispoRecursivo(int passosRestantes){
    if (passosRestantes == 0){
        return;
    }
    printf("Diagonal Direita Para Cima - passo restante: %d/n", passosRestantes);
    moverBispoRecursivo(passosRestantes - 1);
}
void moverTorreRecursivo(int passosRestantes){
    if (passosRestantes ==0){
        return;
    }
    printf(" Direita - passo Restante: %d\n", passosRestantes);
    moverTorreRecursivo(passosRestantes - 1);
}
void moverRainhaRecursivo(int passosRestantes){
    if (passosRestantes == 0){
        return;
    }
    printf(" Esquerda - passo restante: %d\n", passosRestantes);
    moverRainhaRecursivo(passosRestantes - 1);
}
int main(){
    printf("Simulação de movimentação de peças \n\n");
    //movimentação do bispo (usando função recursiva)
    printf("Movimentação do bispo (recursivo):\n");
    moverBispoRecursivo(MOV_BISPO);
    printf("\n");
    //movimentação torre
    printf("Movimentação da torre (recusivo):\n");
    moverTorreRecursivo(MOV_TORRE);
    printf("\n");
    //movimentação da rainha
    printf("Movimentação da rainha (recursivo):\n");
    moverRainhaRecursivo(MOV_RAINHA);
    printf("\n");
}
printf("Movimentação do cavalo (loops aninhados com múltplas condições, continue/break: \n");
int i, J;
int moveCima = 2;
int moveDireita = 1;
int movimentoConcluido = 0;

for (i = 1, j = 1; i <= moveCima + 1 i++) {
    if(i <= moveCima){
        printf(" Movendo para cima - passo %d\n", i);
    }
    if (i == moveCima + 1 && !movimentoConcluido){
        printf("iniciando o movimento lateral");
        while (j <= moveDireita + 1){
            if(j <=moveDireita){
                printf("movendo para direita - passo %d (parte do L)\n", j);
            }else{
                printf("Movimento lateral concluido.\n");
                movimentoConcluido = 1;
                break;
            }
            j++;
        }
    }
    if(movimentoConcluido){
        break;
    }
}
printf("Movimento do cavalo em 'L' finalizado.\n"),
printf("\n");
printf("Fim da simulação");
return 0;
}