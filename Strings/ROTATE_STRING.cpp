#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// LC-796
// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
//  Input: s = "abcde", goal = "cdeab"
//  Output: true

bool rotateString(string s, string goal)
{
    int n = s.length();
    int k = 0;
    while (k < n)
    {
        if (s == goal)
        {
            return true;
        }
        char temp = s[0];
        for (int i = 1; i < n; i++)
        {
            s[i - 1] = s[i];
        }
        s[n - 1] = temp;
        k++;
    }
    return false;
}
int main()
{
    string s = "abcde", goal = "cdeab";
    cout << rotateString(s, goal);
    return 0;
}