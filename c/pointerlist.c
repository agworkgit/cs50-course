#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;

    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]); // atoi - ascii to integer

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // free memory thus far
            return 1;
        }
        n->number = number; // left part of equation points at the top half of the node and sets it equal to our input
        n->next = NULL;

        //list = n; // bad code - this will orphan memory

        n->next = list;
        list = n; // update list to point to n
    }

    // print whole list
    node *ptr = list; // ptr = pointer
    while (ptr != NULL)
    {
        printf("%i\n", ptr-> number);
        ptr = ptr-> next;
    }
}
