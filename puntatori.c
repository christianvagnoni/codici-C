#include <stdio.h>

int main (){
    int i = 5;
    int* p = &i;
    printf("\nindirizzo di memoria 0x%x = %d" , &i, i);
    *p = 7;
    printf("\nindirizzo di memoria 0x%x = %d" , &i, i);
    return 0;
}