// Sorting.

#include <bits/stdc++.h>
using namespace std; 
 
int main () {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] != a[i + 1])
        {
            s += abs(a[i] - a[i + 1]);
        }
    }
 
    cout << s << endl;
 
    return 0;
}