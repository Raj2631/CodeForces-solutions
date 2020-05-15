// Greedy - Sorting - Implementation.

#include <bits/stdc++.h>
#include <algorithm>
 
using namespace std; 
 
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int count = 0;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (5 - a[i] >= k) count++;
    }
    cout << count / 3 << endl;
}