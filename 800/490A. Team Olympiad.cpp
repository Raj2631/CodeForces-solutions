// Greedy - Sorting - Implementation.

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
    int c[3] = {0, 0, 0};
    vector<int> sa, sb, sc;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c[0] += 1;
            sa.push_back(i + 1);
        }
        if (a[i] == 2)
        {
            c[1] += 1;
            sb.push_back(i + 1);
        }
        if (a[i] == 3)
        {
            c[2] += 1;
            sc.push_back(i + 1);
        }
    }
    sort(c , c + 3);
    int total = c[0];
    cout << total << endl;
    for (int i = 0; i < total; i++)
    {
        cout << sa[i] << " " << sb[i] << " " << sc[i] << endl;
    }
    return 0;
}
