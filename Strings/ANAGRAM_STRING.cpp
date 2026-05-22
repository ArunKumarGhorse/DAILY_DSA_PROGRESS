#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// lc 242
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Input: s = "anagram", t = "nagaram"
// Output: true
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    int freq[26] = {0};
    ;
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i : freq)
    {
        if (i != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t);
}