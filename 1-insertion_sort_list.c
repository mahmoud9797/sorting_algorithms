#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t current = NULL, temp = NULL;
	
	if (list == NULL || (*list)->next == NULL || *list == NULL)
	{
		return;
	}
	current = *list;
	current = current->next;
	while(current)
	{
		while (current->prev && current->n > (current->prev)->n)
		{
			temp = currnt;
			if(cuuren->next)
			{
				(current->next)->prev = temp->prev
			}
			(current->prev)->next = temp->next;
			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;
			if(current->prev)
			{
				(cuurent->prev)->next = temp;
			}
			cuurent->prev = temp;
			if(temp->prev == NULL)
			{
				*list = temp;
			}
			print(*list);
			current = current->prev;

		}
		current = current->next;
	}

}
