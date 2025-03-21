#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;

    node *n = malloc(sizeof(node));
    n->number = 1;
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));
    n->number = 2;
    n->next = NULL;
    list -> next = n;

    n = malloc(sizeof(node));
    n->number = 3;
    n->next = NULL;
    list -> next -> next = n;

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i %p -> ",tmp->number,tmp->next);
    }
    printf("\n");

    while (list !=NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
}