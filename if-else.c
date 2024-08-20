#include <stdio.h>

int main(){
    int numeratore;
    int denominatore;
    float divisione;
    printf("\nInserisci il primo numero: ");
    scanf("%d" , &numeratore);


    printf("\nInserisci il secondo numero: ");
    scanf("%d" , &denominatore);

    if (denominatore != 0){
        divisione = numeratore/denominatore;
        printf("\nil risultato è : %f\n" , divisione);
    } else printf("\nil denominatore non può essere 0!\n");

    return 0;
}
