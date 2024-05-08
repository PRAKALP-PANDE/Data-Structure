#include <iostream>
using namespace std;
class Solution
{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function

    //This might comsume more time
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // code here
        // int arr[] = {1, 2, 4, 3, 5, 6, 7};
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j < r + 1; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "Printing array" << endl;
        for (int i = 0; i < r + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        int ans = arr[k - 1];
        return ans;
    }

    // iterative method

    // int kthSmallest(int arr[], int l, int r, int k) {
    //     //code here
    //     int n=r+1;
    //    sort(arr,arr+n);
    //    for(int i=l;i<=r;i++)
    //    {
    //        if(k==i+1)
    //        {
    //            return arr[i];
    //        }
    //    }
    // }
};

//{ Driver Code Starts.

int main()
{
    int test_case;
    cout << "Enter no of test cases: ";
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cout << "enter no of elements: ";
        cin >> number_of_elements;
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
        {
            cout << "Enter element at " << i << " ";
            cin >> a[i];
        }

        int k;
        cout << "Enter k ";
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}