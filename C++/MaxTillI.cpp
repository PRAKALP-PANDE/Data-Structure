#include<iostream>
using namespace std;

int main(){
    int mx = -19999999;
    int n;
    cout<<"Enter the number of element you want to insert:) ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
    
    // There are no error in this program, there might be a package installation problem.
    
    return 0;
}