#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a, b, c, d, e, f, x_value, y_value;
	
	cin >> a;
	cin >> b; 
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	
	if (a/d == b/e && a/d != c/f) {
		cout << "VONGHIEM";	
		return 0;
	}
	
	if (a/d == b/e && a/d == c/f) {
		cout << "VOSONGHIEM";
		return 0;
	}
		
	y_value = (f-(d*c/a)) / (d*-b/a + e);
	
	x_value = (c-b*y_value) / a;
	
	
	cout << fixed << setprecision(2) << x_value << " " << y_value;
	return 0;
}
