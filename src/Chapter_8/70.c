/* Подсчет символов, слов, строк в файле */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int tot_chars = 0;   /* кол-во символов */
    int total_lines = 0; /* кол-во строк */
    int total_words = 0; /* кол-во слов */
    int in_space = 1;
    int c, last = '\n';

    while ((c = getchar()) != EOF)
    {
        last = c;
        tot_chars++;
        if (isspace(c))
        {
            in_space = 1;
            if (c == '\n')
            {
                total_lines++;
            }
        }
        else
        {
            total_words += in_space;
            in_space = 0;
        }
    }

    if (last != '\n')
    {
        /* учитываем последнюю строку */
        total_lines++;
    }

    printf("Строк, Слов, Символов\n");
    printf(" %3d %3d %3d\n", total_lines, total_words, tot_chars);

    return 0;
}