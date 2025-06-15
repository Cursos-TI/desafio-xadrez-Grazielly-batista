#include <stdio.h>
const int MOV_PRIMEIRA_PARTE = 2;
const int MOV_SEGUNDA_PARTE = 1;
int main() {
    printf("--- Movimentação do cavalo em 'L' --- \n\n");
    printf("Movimentação do cavalo: \n");
    for (int i = 1; i <= MOV_PRIMEIRA_PARTE; i++){
        printf(" Descendo - passo %d\n", i);
        if (i == MOV_PRIMEIRA_PARTE) {
            int j = 1;
            while (j <= MOV_SEGUNDA_PARTE) {
                printf(" virando para a esquerda - passo %d (movimento L) \n" , j);
                j++;
        
            }
        }

    }
    printf("\n");
    printf("--- fim da simulação --- \n");
    return 0;




}