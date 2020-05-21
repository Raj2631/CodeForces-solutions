// Math - Number Theory.

#include <iostream>
using namespace std; 
 
int main(void)
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << 9 << " " << n - 9 << endl;
    }
    else 
    {
        if (n / 2 & 1)
            cout << n / 2 - 1 << " " << n / 2 + 1 << endl;
        else
            cout << n / 2 << " " << n / 2 << endl;
    }
    return 0;
}