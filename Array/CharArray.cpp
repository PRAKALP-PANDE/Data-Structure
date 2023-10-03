#include <iostream>
using namespace std;

int main()
{
    // char arr[100] = "apple";

    // int i =0;
    // while(arr[i] != '\0'){
    //     cout<<arr[i];
    //     i++;
    // }

    // cin>>arr;
    // cout<<arr;

    // check palindrome
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
        cout << "The word is palindrome.." << endl;
    else
    {
        cout << "The word is not palindrome.." << endl;
    }

    return 0;
}