#include <stdio.h>
int main() {

  double firstNumber, secondNumber, product;
  printf("Введите два числа: ");

  // Читаем два вещественных числа функцией scanf()
  scanf("%lf%lf", &firstNumber, &secondNumber);

  // Результат умножения сохраняем в переменную product
  product = firstNumber * secondNumber;

  // Выводим результат, после запятой 2 знака, формат %.2lf
  printf("Product = %.2f\n", product);

  return 0;
}