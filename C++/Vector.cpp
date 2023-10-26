#include <iostream>
#include <vector>
using namespace std;
template <class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void insertion(vector<int> &vec){
    int element, size;
    cout << "Enter the size of Vector:- ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout<< "Enter the element at "<<i<<":- ";
        cin>>element;
        vec.push_back(element);
    }
}

int main()
{
    vector<int> vec;
    insertion(vec);
    display(vec);
    vector <int> :: iterator iter = vec.begin();
    vec.insert(iter, 10, 5);
    display(vec);
    return 0;
}