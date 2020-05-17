// Sorting - Brute Force - Implementation.

#include <bits/stdc++.h>
 
using namespace std; 
 
#define vi vector<int>
#define pb push_back
 
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        int count = 1; 
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                count++;
            }
        }
        if (i < n - 1)
        {
            cout << count << " ";
        } 
        else 
        {
            cout << count << endl;
        }
    }   
    return 0;
}