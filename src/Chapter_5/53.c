/* Поиск частоты знаков в строке */
#include <stdio.h>

int main() {
  char str[1000], ch;
  int i, frequency = 0;

  printf("Введите строку: ");
  getc(str);

  printf("Введите символ: ");
  scanf("%c", &ch);

  for (i = 0; str[i] != '\0'; ++i) {
    if (ch == str[i])
      ++frequency;
  }

  printf("Частота = %d\n", frequency);

  return 0;
}