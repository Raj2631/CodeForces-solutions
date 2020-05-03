// Brute Force - Implementation.

#include <iostream>

using namespace std;

int main(void)
{
    string i;
    cin >> i;
    string j[5];
    for (int a = 0; a < 5; a++)
    {
        cin >> j[a];
    }
    int flag = 0;

    for (int m = 0; m < 5; m++)
    {
        if (flag)
        {
            break;
        }
        for (int k = 0; k < 2; k++)
        {
            if (j[m].at(k) == i.at(k))
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}