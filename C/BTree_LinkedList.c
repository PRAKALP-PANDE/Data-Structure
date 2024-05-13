#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

int main()
{
    // Construct the nodes
    /*
    struct node * p = (struct node *) malloc (sizeof(struct node));
    struct node * p1 = (struct node *) malloc (sizeof(struct node));
    struct node * p2 = (struct node *) malloc (sizeof(struct node));
    */

//    Constructing nodes using function (recommended)
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(3);

    p->left = p1;
    p->right = p2;

    return 0;
}