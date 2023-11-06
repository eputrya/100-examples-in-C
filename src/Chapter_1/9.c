#include <stdio.h>

int main(){

    double A, B, temp;

    printf("Введите A: ");
    scanf("%lf", &A);

    printf("Введите B: ");
    scanf("%lf", &B);

    // Значение A будет присвоено переменной temp
    temp = A;

    // Значение B будет назначено переменной A
    A = B;

    // Значение temp будет присвоено B
    B = temp;

    printf("\nПосле замены, A = %.2lf\n", A);
    printf("После замены, B = %.2lf", B);

    return 0;
}