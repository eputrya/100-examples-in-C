/*  Определение длины строки без функции strlen() */
#include <stdlib.h>
int main()
{
    char s[1000], i;

    printf("Введите строку: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; ++i)
        ;

    printf("Длина: %d\n", i);
    return 0;
}