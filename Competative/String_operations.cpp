/*
Cheems doesn't like extra content so coming straight to the point. Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.
*/

#include <iostream>
#include <string>
using namespace std;

char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string str;
        cin >> str;
        if (str.size() == 0)
        {
            break;
        }
        for (int i = 0; i < str.size(); ++i)
        {
            str[i] = upper(str[i]);
        }
        cout << str << endl;
    }

    return 0;
}