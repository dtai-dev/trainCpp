#include <iostream> 
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int value = n-k;
	unsigned long long top=1, bottom=1;
	
	if (k == n) {
		cout << "1";
		return 0;
	}
	
	if (k > value) {
		for (int i=k+1; i<=n; i++) 
			top *= i;
		for (int i=1; i<=value; i++)
			bottom *= i;
	
		cout << top/bottom;

	} else {
		for (int i=value+1; i<=n; i++) 
			top *= i;
		for (int i=1; i<=k; i++)
			bottom *= i;
		
		cout << top/bottom;
	}
	
	return 0;
}
