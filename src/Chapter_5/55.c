/* Удаляем все символы в стрке, кроме цифр */
#include <stdio.h>

int main()
{
    char line[150];
    int i, j;
    printf("Введите строку: ");
    gets(line);

    for (i = 0; line[i] != '\0'; ++i)
    {
        while (!(line[i] >= '0' && line[i] <= '9') || line[i] == '\0')
        {
            for (j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }

    printf("Результат: ");
    puts(line);
    return 0;
}