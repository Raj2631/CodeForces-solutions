#include <iostream>
 
using namespace std;
 
int main(void) {
    int  t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << (24 - a) * 60 -  b << endl;
    }
    return 0;
}
