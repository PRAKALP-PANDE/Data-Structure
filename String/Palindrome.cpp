#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int isPalindrome(string S)
{
    // Your code goes here
    string P;
    int r = 0;
    P = S;
    reverse(P.begin(), P.end());
    if (S == P){
        r = 1;
    }
    return r;
}

int main()
{
    string S;
    cin >> S;

    cout<<isPalindrome(S);

    return 0;
}