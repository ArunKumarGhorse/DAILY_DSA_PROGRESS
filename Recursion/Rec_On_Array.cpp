#include <iostream>
using namespace std;
// Sum form left to right
int sum(int arr[], int index, int n, int sm)
{
    if (index == n)
        return sm;
    sm += arr[index];
    return sum(arr, index + 1, n, sm);
}

// sum from right to left

int sum(int arr[], int index)
{
    if (index == -1)
        return 0;
    return arr[index] + sum(arr, index - 1);
}

// Minimum element in an Array

int minEle(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }

    return min(arr[index], minEle(arr, index + 1, n));
}

// Maximum Element in an Array
int maxEle(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return max(arr[index], maxEle(arr, index + 1, n));
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum form left to right : " << sum(arr, 0, 5, 0) << "\n";
    cout << "Sum form right to Left : " << sum(arr, 4) << "\n";
    cout << "Minimum element in an Array : " << minEle(arr, 0, 5) << "\n";
    cout << "Maximum element in an Array : " << maxEle(arr, 0, 5);
    return 0;
}