#include <stdio.h>

int	main(){
int k;

    // printf() отображает приглашение 
    printf("Введите целое число: ");

    // scanf() читает форматированный ввод пользователя и 
    // записывает его в переменную 
    scanf("%d", &k);

    // printf() отображает отформатированный вывод
    printf("Вы ввели: %d", k);
    return 0;
}
