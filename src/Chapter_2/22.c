/* Определяем НОК с помощью бесконечного цикла */
#include <stdio.h>
int main() {
  int n1, n2, minMultiple;
  printf("Введите два целых положительных числа: ");
  scanf("%d %d", &n1, &n2);

  // определяем максимум среди n1 и n2 и сохраняем в minMultiple
  minMultiple = (n1 > n2) ? n1 : n2;

  // Бесконечный цикл
  while (1) {
    if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
      printf("НОК = %d.\n", minMultiple);
      break;
    }
    ++minMultiple;
  }
  return 0;
}
