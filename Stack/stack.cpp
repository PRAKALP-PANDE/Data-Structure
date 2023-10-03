#include<iostream>
#define n 100
using namespace std;

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow..."<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack underflow.."<<endl;
            return;
        }
        top--;
    }

    void Top(){
        if(top==-1){
            cout<<"No element to show."<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }

    bool empty(){
        return top == -1;
    }
};

int main(){

    stack stk;
    stk.push(1);   
    stk.push(2);   
    stk.push(3);   
    stk.push(3);   
    stk.Top();
    stk.pop();
    stk.Top();
    stk.pop();
    stk.pop();
    stk.pop();
    cout<<stk.empty()<<endl;
    return 0;
}