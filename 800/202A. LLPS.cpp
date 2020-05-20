// Brute Force - Binary Search - Implementation - Greedy - Bitmasks - Strings.

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end(),greater<char>());
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==s[0])
        {
            cout << s[i];
        }
    }
    cout << endl;
}
