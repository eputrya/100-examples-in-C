/* Сумма натуральных чисел с помщью цикла while() */
#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Введите n: ");
    scanf("%d", &n);

    i = 1;
    while ( i <= n)
    {
        sum += i;
        ++i;
    }

    printf("Сумма = %d", sum);

    return 0;
}
