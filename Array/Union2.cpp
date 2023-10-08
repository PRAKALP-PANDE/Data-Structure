#include <iostream>
#include <algorithm>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    int c[100000], j = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = n; i < m + n; i++)
    {
        c[i] = b[j++];
    }
    sort(c, c + m + n);
    for (int i = 1; i < m + n; i++)
    {
        if (c[i] != c[i - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << doUnion(a, n, b, m) << endl;

    return 0;
}