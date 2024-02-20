/* Демонстрация циклв do..while */
#include <stdio.h>
int main() {
  int n, i, sum = 0;

  do {
    printf("Введите целое положительное число > 0: ");
    scanf("%d", &n);
  }

  while (n <= 0);

  for (i = 1; i <= n; ++i) {
    sum += i; // sum = sum+i
  }

  printf("Сумма = %d", sum);

  return 0;
}
