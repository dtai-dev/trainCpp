#include <iostream>

using namespace std;

int main() {
	int i=0, count=1;
	int A[12], B[11];
	
	for(i=1; i<=11; i++)
		cin >> A[i];
		
	for(i=1; i<=10; i++) {
		if(A[i] == A[11]) {
			B[count] = i;
			count = count + 1;
		}
	}
	
	if(count != 1) {
		for(i=1; i<count; i++)
			cout << B[i] << " ";
	} else {
		cout << "-1";
	}
		 
	return 0;
}
