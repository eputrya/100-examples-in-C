/* Конкатенация двух строк без функции strecat() */
#include <stdio.h>
int main()
{
    char s1[100], s2[100], i, j;

    printf("Первая строка: ");
    scanf("%s", s1);

    printf("Вторая строка: ");
    scanf("%s", s2);

    // вычисляем длину s1 и помещаем ее в i
    for (i = 0; s1[i] != '\0'; ++i)
    {
        for (j = 0; s2[j] != '\0'; ++j, ++i)
        {
            s1[i] = s2[j];
        }
    }

    s1[i] = '\0';
    printf("Результаты: %s\n", s1);

    return 0;
}