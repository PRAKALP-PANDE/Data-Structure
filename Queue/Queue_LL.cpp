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

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    int pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow..." << endl;
            return -1;
        }
        node *delnode = front;
        front = front->next;
        delete delnode;
        return delnode->data;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue is underflow..." << endl;
            return 0;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            cout << "Queue is underflow..";
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    q.empty();
    return 0;
}