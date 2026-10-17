#include <iostream>
using namespace std;

int main() {
	long long i, j, n, count=0;
	cin >> n;
	long long A[n], B[100];
	
	for (i=0; i<n; i++) 
		cin >> A[i];
		
	for (i=0; i<n; i++) {
		while (A[i]/2 != 0) {
			B[count] = A[i] - A[i]/2*2;
			A[i] = A[i]/2;
			count +=1;
		}
		B[count] = 1;

		for (j=count; j>=0; j--)
			cout << B[j];
		cout << endl;
		count =0;
	}
	
	return 0;
}
