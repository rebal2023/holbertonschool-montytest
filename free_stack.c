#include "monty.h"
/**
* free_stack - function that frees a stack
* @head: stack head
*/
void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
