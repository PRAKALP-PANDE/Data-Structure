#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void BubbleSort(int *a, int n)
{
    int temp;
    int issorted = 1;
    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}

int main()
{
    int a[] = {12, 22, 10, 14, 17, 18, 9};
    int n = 7;
    printarray(a, 7);
    BubbleSort(a, n);
    printarray(a, n);
    return 0;
}