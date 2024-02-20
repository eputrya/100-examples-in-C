/* Храним информацию о студенте в структуре */
#include <stdio.h>
struct student {
  char name[50];
  int roll;
  int group;
} s;

int main() {
  printf(" Введите информацию:\n");

  printf("Имя: ");
  scanf("%s", s.name);

  printf("Номер билеты: ");
  scanf("%s", &s.roll);

  printf("Номер группы: ");
  scanf("%f", s.group);

  printf("Выводим информацию:\n");

  printf("Имя: ");
  puts(s.name);

  printf("Номер билета: %d\n", s.roll);

  printf("Номер группы: %.1f\n", s.group);

  return 0;
}
