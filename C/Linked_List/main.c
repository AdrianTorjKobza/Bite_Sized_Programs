#include <stdio.h>
#include <stdlib.h>

//Represents a node.
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (void)
{
    //List of size 0.
    node *list = NULL;

    //Allocate memory in heap for the new node.
    node *n = malloc(sizeof(node));

    //Exit, if n is pointing to "nothing".
    if (n == NULL)
    {
        return 1;
    }

    //Allocate number 1 and pointer / tail to NULL.
    n->number = 1;
    n->next = NULL;

    //List is now pointing to the new node n.
    list = n;

    //Allocate memory in heap for the new node.
    n = malloc(sizeof(node));

    //Exit, if n is pointing to "nothing".
    if (n == NULL)
    {
        return 1;
    }

    //Allocate number 2 and pointer / tail to NULL.
    n->number = 2;
    n->next = NULL;

    //Previous node (number 1) is now pointing to the new node.
    list->next = n;

    //Allocate memory in heap for the new node.
    n = malloc(sizeof(node));

    //Exit, if n is pointing to "nothing".
    if (n == NULL)
    {
        return 1;
    }

    //Allocate number 3 and pointer / tail to NULL.
    n->number = 3;
    n->next = NULL;

    //Previous node (number 2) is now pointing to the new node.
    list->next->next = n;

    //Print the list of nodes.
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    //Free list from memory.
    while (list != NULL)
    {
        node *tmp = list->next;
        free (list);
        list = tmp;
    }
}
