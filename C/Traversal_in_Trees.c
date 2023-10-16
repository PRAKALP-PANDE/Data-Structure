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

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d", root->data);
    }
}

int main()
{

    struct node *p = createNode(4);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(5);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(1);

    p->left = p1;
    p1->left = p4;
    p->right = p2;
    p1->right = p3;

    printf("\nRunning PreOrder:- ");
    preOrder(p);
    printf("\nRunning InOrder:-  ");
    inOrder(p);
    printf("\nRunning PostOrder:-  ");
    postOrder(p);

    return 0;
}

/*
    p->left=p1;
    p1->left=p4;
    p->right=p2;
    p1->right=p3;


               p
             /   \
            p1   p2
          /   \
         p4   p3

               4
             /   \
            2     5
          /   \
         1     3

*/