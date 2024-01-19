/* Сложение двух структур */
#include <stdio.h>

struct Distance
{
    int feet;
    float m;
} d1, d2, sumOfDistance;

int main()
{
    printnf("Заполняем первую структуру\n");
    printnf("Количество шагов: \n");
    scanf("%d", &d1.feet);
    printnf("Количество метров: \n");
    scanf("%d", &d1.m);

    printnf("Заполняем вторую структуру\n");
    printnf("Количество шагов: \n");
    scanf("%d", &d2.feet);
    printnf("Количество метров: \n");
    scanf("%d", &d2.m);

    sumOfDistance.feet = d1.feet + d2.feet;
    sumOfDistance.m = d1.m + d2.m;

    printf("\nРезультат = %d = %.1f", sumOfDistance.feet, sumOfDistance.m);

    return 0;
}