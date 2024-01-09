/* Умножение двух матриц с передачей матрицы в функции */
#include <stdio.h>

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst,
               int rowSecond, int columnSecond);

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst,
                      int columnFirst, int rowSecond, int columnSecond);

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst,
        rowSecond, columnSecond, i, j, k;

    printf("Введите количество строк и колонок матриц 1: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Введите количество строк и колонок матриц 2: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    // Проверяем, можем ли мы умножить 2 матрицы
    while (columnFirst != rowSecond)
    {
        printf("Ошибка! К-во колонок первой матрицы не равно количество строк второй\n");
        printf("Введите количество строк и колонок матрицы 1: ");
        scanf("%d%d", &rowFirst, &columnFirst);
        printf("Введите количество строк и колонок матрицы 2: ");
        scanf("%d%d", &rowSecond, &columnSecond);
    }

    // Вводим данные
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // Умножаем 2 матрицы
    multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond,
                     columnSecond);

    // Выводим результат
    display(mult, rowFirst, columnSecond);

    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst,
               int rowSecond, int columnSecond)
{
    int i, j;
    printf("\nВведите элементы матрицы 1:\n");
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnFirst; ++j)
        {
            printf("Введите элементы a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\nВведите элементы матрицы 2:\n");
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnFirst; ++j)
        {
            printf("Введите элементы b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst,
                      int columnFirst, int rowSecond, int columnSecond)
{
    int i, j, k;

    // Заполняем результирующую матрицу нулями
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            mult[i][j] = 0;
        }
    }

    // Умножаем 2 матрицы и сохраняем результат в mult
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            for (k = 0; k < columnFirst; ++k)
            {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
    int i, j;
    printf("\nРезульат:\n");
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            printf("%d  ", mult[i][j]);
            if (j == columnSecond - 1)
                printf("\n\n");
        }
    }
}
