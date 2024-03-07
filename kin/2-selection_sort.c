#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: double pointer to linked list head
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *i, *key, *j;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    for (i = (*list)->next; i; i = i->next)
    {
        key = i;
        j = i->prev;
        for (; j && j->n > key->n; j = key->prev)
        {
            j->next = key->next;
            if (key->next)
                key->next->prev = j;
            key->next = j;
            key->prev = j->prev;
            if (key->prev)
                key->prev->next = key;
            else
                *list = key;
            j->prev = key;

            // Print the list (optional, for visualization)
            print_list(*list);

            // Free the memory of the previous node (moved to a new position)
            free(j);
        }
    }
}

