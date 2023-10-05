#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
};

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
        return 0;
}

struct node *push(struct node *top, int x)
{
    if (isfull(top))
    {
        printf("Overflow, the stack is full...\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
};

int pop(struct node *tp)
{
    if (isempty(top))
    {
        printf("Stack is empty...");
    }
    else
    {
        struct node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 16);
    top = push(top, 22);
    top = push(top, 16);
    top = push(top, 5);

    top = push(top, 7);

    traverse(top);

    int element = pop(top);
    printf("Poped element is %d\n", element);

    return 0;
}