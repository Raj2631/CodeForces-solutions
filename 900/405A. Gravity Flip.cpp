// Sorting - Implementation - Greedy.

#include <bits/stdc++.h>
 
using namespace std; 
 
#define vi vector<int>
#define pb push_back
 
int main () {
    int n;
    vi a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
 
    sort(a.begin(), a.end());
 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
 
    cout << endl;
}