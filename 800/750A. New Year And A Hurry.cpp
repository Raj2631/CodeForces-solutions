// Binairy Search - Brute Force - Implementation - Math.

#include <bits/stdc++.h>
 
using namespace std; 
 
#define vi vector<int>
#define pb push_back
 
int main () {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int l = 240 - k, count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i * 5 <= l)
        {
            count++;
            l = l - i * 5;
        }
        else break;
    }
    cout << count << endl;
}
