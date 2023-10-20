/*

Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.For each given test case tell whether the given sequence will be liked by Jiya.

INPUT FORMAT-

    First line constains t number of test cases.

    Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

OUTPUT FORMAT -

    Print "YES" or "NO",whether Jiya likes the sequence or not.

*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter no of test case: ";
    cin >> t;
    while (t--)     //It will run loop until t becomes 0
    {
        int n;
        cout << "Enter number of integers the sequence contains: ";
        cin >> n;
        long long product = 1;
        cout << "Enter the sequence: ";
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            product = product * x;
        }
        int digit = product % 10;
        if (digit == 2 || digit == 3 || digit == 5)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}