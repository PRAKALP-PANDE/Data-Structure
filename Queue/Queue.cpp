#include <iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "Queue is full.." << endl;
            return;
        }
        back++;
        arr[back] = val;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Cannot pop" << endl;
            return;
        }
        front++;
    }

    int peak()
    {
        if (front == -1 || front > back)
        {
            cout << "No Element" << endl;
            return -1;
        }
        cout << arr[front] << endl;
        return 1;
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            cout << "Cannot pop" << endl;
            return false;
        }
        return true;
    }
};

int main()
{

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.peak();
    q.pop();

    q.peak();
    q.pop();

    q.peak();
    q.pop();
    
    q.peak();
    q.pop();

    q.empty();

    return 0;
}