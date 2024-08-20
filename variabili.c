#include <stdio.h>
/* Variabili
* int = numero -> 4 byte -> 32bit, ovvero 4.294.967.296 valori tra - 2.147.483.648 e 2.147.483.647
* short = numero 2 byte -> 16bit
* float = numero in virgla mobile 2byte per numero e 2byte per virgola 4byte
* long o double raddoppia float e int
* double è abbreviazione per long float
* char -> carattere composto da 1 byte -> 8bit -> 256 valori -> 128 usati in realtà
*/ 
int main(){
    int primo_numero;
    int secondo_numero;
    int somma;

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d" , &secondo_numero);

    somma = primo_numero + secondo_numero;

    printf("La somma dei due numeri è : %d\n" , somma);
}