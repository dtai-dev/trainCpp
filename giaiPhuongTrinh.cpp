#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c;
	
	float delta = b*b-4*a*c;
	
	if (a!=0 && delta<0 || a==0 && b==0 && c!=0) {
		cout << "NO";
		return 0;	
	}
		
	if (a==0 && b==0 && c==0) {
		cout << "WOW";
		return 0;
	}
	
	if (a==0) {
		if (c==0) {
			cout << fixed << setprecision(2) << c/b;
			return 0;
		}
		cout << fixed << setprecision(2) << -c/b;
		return 0;
	}
	
	if (delta == 0) {
		float x1, x2, sqrt_delta = sqrt(delta);
		
		x1 = (-b+sqrt_delta)/(2*a);
		x2 = (-b-sqrt_delta)/(2*a);
		cout << fixed << setprecision(2) << x1;
		return 0;
	}
	
	if (delta > 0) { 
		float x1, x2, sqrt_delta = sqrt(delta);
		
		x1 = (-b+sqrt_delta)/(2*a);
		x2 = (-b-sqrt_delta)/(2*a);
		if (x1 < x2)
			cout << fixed << setprecision(2) << x1 << " " << x2;
		else 
			cout << fixed << setprecision(2) << x2 << " " << x1;
	}
}
