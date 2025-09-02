#include <stdio.h>

int main () {

    // ----------------------------------------- movimento torre -------------------------------------------

    printf("----- Torre ------\n\n");

    int count_torre = 1;
   
    do {
        printf("move-se para direita \n");
        count_torre++;
    } while (count_torre <= 5);


    // ----------------------------------------- movimento bispo -------------------------------------------

    printf("\n----- Bispo ------\n\n");

    for (int count_bispo = 1; count_bispo <= 5; count_bispo++) {
        printf("Cima, Direita \n");
    };

    // ----------------------------------------- movimento rainha -------------------------------------------

    printf("\n----- Rainha ------\n\n");
    
    int count_rainha = 1;
   
    while (count_rainha <= 5) {
        printf("move-se para esquerda \n");
        count_rainha++;
    }

    return 0;
}
