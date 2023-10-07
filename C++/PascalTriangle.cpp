#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = fact(i) / (fact(i - j) * fact(j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}