#include <iostream>
#include <numeric>
using namespace std;

int main() {
	long long n, a, b, c, x, y, z, special;
	cin >> n >> a >> b >> c;

//	Hàm lcm chỉ hoạt động ở C++17 trở lên!!!	
	x = lcm(a, b);
	y = lcm(a, c);
	z = lcm(b, c);
	special = lcm(x, c);
		
	cout << n/a + n/b + n/c - n/x - n/y - n/z + n/special;
	
	return 0;
}
