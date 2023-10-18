#include <iostream>
#include <vector>
using namespace std;

bool searching(vector<int> result, int target)
{
    for (int i = 0; i < result.size(); i++)
    {
        // cout<<result.at(i)<<" ";
        if (i == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int c, r, target;
    cout << "Enter number of rows and column respectively: ";
    cin >> r >> c;
    cout << "Enter Target element: ";
    cin >> target;
    vector<vector<int>> matrix(r);
    cout << "Enter elements: ";
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> result;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result.push_back(matrix[i][j]);
        }
    }

    cout<<searching(result, target);

    cout << endl;

    return 0;
}