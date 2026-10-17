#include <iostream>
using namespace std;

int main() {
	string str;
	int n;
	bool check = true;
	
	cin >> str;
	n = str.length();
	
	if (n%2==0) {
		for (int i=0; i<=n/2; i++) {
			if (str[i] != str[n-i-1]) {
					check = false;
			}
		}
		if (check) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	} else {
		for (int i=0; i<=n/2; i++) {
			if (str[i] != str[n-i-1]) {
				check = false;
			} 
		}
		if (check) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	
	return 0;
}