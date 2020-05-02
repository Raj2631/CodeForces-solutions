#include <iostream>

using namespace std;

int main(void) {
	int n, countz = 0, countn = 0;
	string str;
	cin >> n >> str;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'z') {
			countz++;
		} else if (str[i] == 'n') {
			countn++;
		}
	}
	for (int i = 0; i < countn; i++) {
		cout << 1 << ' ';
	}

	for (int i = 0; i < countz; i++) {
		cout << 0 << ' ';
	}

	cout << endl;
	return 0;
}