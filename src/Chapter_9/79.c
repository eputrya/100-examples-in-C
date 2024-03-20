/* Сортировка связного списка слиянием */

#include <stdio.h>
#include <stdlib.h>

struct node{
int number;
struct node *next;
};

/* добавляем узел в связный список */
struct node *addnode(int number, struct node *next);
/* сортировка слиянием */
struct node *mergesort(struct node *head);
/* слияние списков */
struct node *merge(struct node *head_one, struct node *head_two);

int main(void)
{
	struct node *head;
	struct node *current;
	struct node *next;
	int test[] = {8, 3, 2, 6, 1, 5, 4, 7, 9, 0};
	int i;

	head = NULL;
	/* вставляем числа в связный список */
	for(i = 0; i < 10; i++)
		head = addone(test[i], head);

	/* сортируем список */
	head = mergesort(head);

	/* выводим результат */
	printf(" До   После"), i = 0;
	for(current = head; current != NULL; current = current->next)
		printf("%4d\t%4d\n", test[i++], current->number);

	/* освобождаем память */
	for(current = head; current != NULL; current = next)
		next = current->next, free(current);

	/* все */

	return 0;

}
