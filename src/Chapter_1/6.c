#include <stdio.h>

int main(){

    int dividend, divisor, quotien, remainder;

    printf("Введите делимое: ");
    scanf("%d", &dividend);

    printf("Введите делитель: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotien = dividend / divisor;

    // Computes remained
    remainder = dividend % divisor; 

    printf("Частное = %d\n", quotien);
    printf("Остаток = %d\n", remainder);

    return 0;

}