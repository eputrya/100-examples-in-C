/* Копирование строки без strcpy() */
#include <stdio.h>
int main() {
  char s1[100], s2[100], i;

  printf("Введите строку s1: ");
  getc(s1);

  for (i = 0; s1[i] != '\0'; ++i) {
    s2[i] = s1[i];
  }

  s2[i] = '\0';
  printf("Строка s2: %s\n", s2);

  return 0;
}