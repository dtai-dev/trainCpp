#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	
	for (int i=0; i<n; i++)
		cin >> A[i];
		
	int result = A[0] + A[n-1];
	int value = n-1;
	
	for (int i=0; i<n-1; i++) {
		if (result < A[i]+A[i+1] || result == A[i]+A[i+1] && A[i] > A[value]) {
			value = i;
			result = A[i]+A[i+1];
		}
	} 
	
	if (value == n-1)
		cout << A[value] << " " << A[0];
	else
		cout << A[value] << " " << A[value+1];
	
	return 0;
}
