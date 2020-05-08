// Implementation - Math.

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, a, b, c, d, flag;
    cin >> t;
    while (t--)
    {
        flag = 0;
        cin >> a >> b;
        cin >> c >> d;
        if (a == c)
        {
            if (b + d == a)
                flag = 1;
        }
        if (b == d)
        {
            if (c + a == b)
                flag = 1;
        }
        if (a == d)
        {
            if (b + c == a)
                flag = 1;
        }
        if (c == b)
        {
            if (a + d == b)
                flag = 1;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}