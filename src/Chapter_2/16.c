/* Вычисляем сумму натуральных чисел с помощью цикла for */
#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Введите положительное целое число: ");
    scanf("%d", &n);

    for(i=1; i <= n; ++i)
    {
        sum += i; // sum = sum+i;
    }

    printf("Сумма = %d\n", sum);

    return 0;
}
