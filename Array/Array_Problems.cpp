#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
// Leaders in Array
void leders(vector<int> x)
{
    int n = x.size();
    int led = x[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (x[i] >= led)
        {
            cout << x[i] << " ";
            led = x[i];
        }
    }
}

// left rotate
void LeftRotate(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;

    // int prev = n - k;
    for (int i = k; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}

// left rotate 0
void LeftRotate2(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    while (k--)
    {
        int temp = arr[0];

        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// left rotate 3
// O(n) sp->O(k) 
void LeftRotate3(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    vector<int> temp;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }

    int idx = k;
    for (int i = k; i < n; i++)
    {

        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {

        arr[n - k + i] = temp[i];
    }

    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// rotate arr optimal

void rotate(vector<int>& arr, int k) {
//O(n) O(1)
int n = arr.size();
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}


int main()
{
    vector<int> x = {16, 17, 4, 3, 5, 2};
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    // LeftRotate2(arr, k);
    LeftRotate3(arr, k);
    // leders(x);
    return 0;
}
