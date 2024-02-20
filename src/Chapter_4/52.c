/* Поиск максимума с использованием динамического выделения памяти */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, num;
  float *data;

  printf("Введите количество элементов: ");
  scanf("%d", &num);

  // Выделение памяти под 'sum' элементов
  data = (float *)calloc(num, sizeof(float));

  if (data == NULL) {
    printf("Ошибка выделения памяти\n.");
    exit(1);
  }

  printf("\n");

  // Вводим элементы
  for (i = 0; i < num; ++i) {
    printf("Введите элемент %d: ", i + 1);
    scanf("%f", data + i);
  }

  // Ищем максимальный элемент
  for (i = 0; i < num; ++i) {
    // Сохраняем максимальный элемент
    if (*data < *(data + i))
      *data = *(data + i);
  }

  printf("Максимум = %.2f\n", *data);

  return 0;
}