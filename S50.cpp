#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Print the smallest prime number upto N number
// o(N LOG K)
int smallestprime(int n)
{
    int num = n;
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return i;
        }
    }
    return num;
}

int main()
{
    int n = 12;
    for (int i = 1; i <= 12; i++)
    {
        cout << i << " SPF is : " << smallestprime(i) << "\n";
    }

    return 0;
}
