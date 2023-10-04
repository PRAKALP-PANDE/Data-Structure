#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    // Sorting the string
    sort(str.begin(), str.end());
    cout << str << endl;

    // Sorting in decending order
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;

    return 0;
}