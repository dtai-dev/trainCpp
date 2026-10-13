#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, value, count =1;
    string strLine;
    cin >> n;
    int A[n], B[n], C[n];
    
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    for (int i=0; i<n; i++) {
        A[i] = 1 << i;
        B[i] = A[i];
        C[i] = A[i];
    }
    
    value = 1 << n;
    
    for (count=1; count<=value; count++) {  
        for (int i=n-1; i>=0; i--) {
            if (A[i] > 0) {
				strLine += '0';
                A[i] -= 1;
            } else {
          		strLine += '1';
                B[i] -= 1;
            }
            if (A[i]==0 && B[i]==0) {
                A[i] = C[i];
                B[i] = C[i];
            }
        }
        cout << strLine << "\n";
        strLine.clear();
    }
    return 0;
}
