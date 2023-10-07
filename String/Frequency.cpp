#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    int maxf = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxf << " " << ans << endl;

    return 0;
}