#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the list linked
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
	printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
	counter++;
	l_n = head;
	tmp_n = tmp_n->next;
	new_n = 0;
	while (new_n < counter)
	{
		if (tmp_n == l_n)
		{
			printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
			return (counter);
		}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
		exit(98);
	}
	return (counter);
}
