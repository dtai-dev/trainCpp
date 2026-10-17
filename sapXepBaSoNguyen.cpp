#include <iostream>
using namespace std;

int main() {
	int A[3];
	int i, chest;
	
	for(i=0; i<3; i++)
		cin >> A[i];
		
	for(i=0; i<3; i++) {
		if(A[0] < A[i]) {
			chest = A[0];
			A[0] = A[i];
			A[i] = chest;
		}
	}
	cout << A[0] << " ";
	
	if(A[1] > A[2]) {
		cout << A[1] << " ";
		cout << A[2];
	} else {
		cout << A[2] << " ";
		cout << A[1];	
	}
	return 0;
}
