#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a, b, abs_a, abs_b;
	cin >> a >> b;
	
	abs_a = abs(a);
	abs_b = abs(b);
	
	if (b == 0) {
		cout << "INVALID";
		return 0;	
	}
	
	if (a%b == 0) {
		cout << a/b;
		return 0;	
	}
	
	if (abs_a>abs_b) 
		for (int i=abs_b; i>=2; i--) 
			if (a%i==0 && b%i==0) {
				if (b<0)
					cout << a/i*-1 << " " << b/i*-1;
				else
					cout << a/i << " " << b/i;
				return 0;	
			}
			
			
	if (abs_a<=abs_b) 
		for (int i=abs_a; i>=2; i--) 
			if (a%i==0 && b%i==0) {
				if (b<0)
					cout << a/i*-1 << " " << b/i*-1;
				else
					cout << a/i << " " << b/i;
				break;	
			}
			
	return 0;
}
