#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return (0);
	while(h->next != NULL)
	{
		count ++;
		h = h->next;
	}
	count += 1;
	return (count);
}

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}



