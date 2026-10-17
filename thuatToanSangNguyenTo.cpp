#include <iostream>
#include <stdbool.h>
using namespace std;
		
int main() {
	long long int n, i, j;
	cin >> n;
	bool check[n];
		
	for(i=2; i<=n; i++) 
		check[i-2] = true;
		
	for(i=2; i<=n; i++) {
		if(check[i-2])
			for(j=2*i; j<=n; j+=i)
				check[j-2] = false;
	}
		
	for(i=2; i<=n; i++)
		if(check[i-2])
			cout << i << " ";
	return 0;
}
