/* Определяем, является ли символ алфавитным или нет */
#include <stdio.h>

int main()
{
    char c;
    printf("Введите сисмвол: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
        printf("%c - алфавитный\n", c);
    else
        printf("%c - не алфавитный\n", c);

    return 0;
}
