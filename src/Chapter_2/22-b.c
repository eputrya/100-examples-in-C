/* Определяем НОК через НОД */
#include <stdio.h>
int main()
{

    int n1, n2, i, gcd, lcm;

    printf("Введите два целых положительных числа: ");
    scanf("%d %d", &n1, &n2);
    // Вычисляем НОД
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    // Вычисляем НОК
    lcm = (n1 * n2) / gcd;
    printf("НОК = %d\n", lcm);

    return 0;
}