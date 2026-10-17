#include <iostream>
using namespace std;

int main() {
	int n, box;
	cin >> n;
	int A[n] = {};
	
	for (int i=0; i<n; i++) 
		cin >> A[i];
	
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++) {
			if (A[i] < A[j]) {
				box = A[i];
				A[i] = A[j];
				A[j] = box;
			}
		}

	if (A[0]*A[1] > A[n-1]*A[n-2]) 
		cout << A[0]*A[1]; 
	else 
		cout << A[n-1]*A[n-2];
		
	return 0;
}
