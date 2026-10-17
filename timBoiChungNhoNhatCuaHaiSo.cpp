#include <iostream>
using namespace std;

int main() {
	int a, b, i=-1;
	
	cin >> a >> b;
	
	if(a < 0)
		a = a*-1;
	if(b < 0)
		b = b*-1;
	
	if(a%b == 0 && b%a != 0)
		cout << a;
	if(b%a == 0)
		cout << b;
	
	if(a != b && a > b && a%b != 0) 
		do {
			i = i+1;
			if((a*2+i)%b == 0 && (a*2+i)%a == 0) 
				cout << (a*2+i);
		} while((a*2+i)%b != 0 || (a*2+i)%a != 0);
	
	if(b != a && b > a && b%a != 0) 
		do {
			i = i+1;
			if((b*2+i)%a == 0 && (b*2+i)%b == 0) 
				cout << (b*2+i);
		} while((b*2+i)%a != 0 || (b*2+i)%b != 0);
	
	return 0;
}
