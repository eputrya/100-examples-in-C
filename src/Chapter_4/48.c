/* Транспонированная матрица */
#include <stdio.h>

int main() {
  int a[10][10], transponse[10][10], r, c, i, j;
  printf("Введите количество строк и колонок: ");
  scanf("%d %d", &r, &c);

  // Сохраняем элементы
  printf("\nВведите элементы матрицы:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Введите элементы a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  // Показываем a[][]
  printf("\nИсходная матрица: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d  ", a[i][j]);
      if (j == c - 1)
        printf("\n\n");
    }

  // Вычисляем транспонированную матрицу
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      transponse[j][i] = a[i][j];
    }

  // Результат
  printf("\nТранспорированная матрица:\n");
  for (i = 0; i < c; ++i)
    for (j = 0; j < r; ++j) {
      printf("%d  ", transponse[i][j]);
      if (j == r - 1)
        printf("\n\n");
    }

  return 0;
}