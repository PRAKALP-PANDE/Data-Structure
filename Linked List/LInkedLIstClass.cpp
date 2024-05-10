#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertatfirst(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertattail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertatindex(node *head, int val, int index)
{
    node *temp = head;
    node *n = new node(val);
    int i = 0;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
}

bool search(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node *head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void deletehead(node *&head)
{
    head = head->next;
}

int main()
{

    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    cout << "Inserting 99 at first postion: " << endl;
    insertatfirst(head, 99); // Insert at first
    cout << search(head, 16) << endl;
    cout << "Deleting the node: " << endl;
    deletion(head, 3);
    display(head);
    cout << "Deleting the head node: " << endl;
    deletehead(head);
    display(head);
    cout << "After inserting 22 after 2nd position:" << endl;
    insertatindex(head, 22, 2);
    display(head);

    return 0;
}