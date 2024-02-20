/* Пример 11. Проверяем является ли символ гласным или согласныи */
#include <stdio.h>

int main() {
  char c;
  int isLowercaseVowel, isUppercaseVowel;

  printf("Введите символ: ");
  scanf("%c", &c);

  /* возвращает 1 (true), если с - гласный (нижний регистр) */
  isLowercaseVowel = (c == 'а' || c == 'е' || c == 'и' || c == 'о' ||
                      c == 'у' || c == 'э' || c == 'ю' || c == 'я' || c == 'ы');

  /* возвращает 1 (true), если с - гласный (верхний регистр) */
  isUppercaseVowel = (c == 'А' || c == 'Е' || c == 'И' || c == 'О' ||
                      c == 'У' || c == 'Э' || c == 'Ю' || c == 'Я' || c == 'Ы');

  /* возвращает 1 (true), если true одна из переменных - isLowercaseVowel
   * или isUppercaseVowel */

  if (isLowercaseVowel || isUppercaseVowel)
    printf("Введенный сивол - гласный\n");
  else
    printf("Введенный символ - согласный\n");
  return 0;
}
