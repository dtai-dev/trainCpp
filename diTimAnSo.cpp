#include <iostream>
using namespace std;

int main() {
	long long int n, i, sum=0;
	
	cin >> n;
	for(i=1; i<=n; i++) {
		sum = sum + i;
		if(sum < n && sum+i+1 > n) {
			cout << i;
			i = n + 1;
		}
		if(sum < n && sum+i+1 == n) {
			cout << i+1;
			i = n + 1;
		}
	}
	return 0;
}
