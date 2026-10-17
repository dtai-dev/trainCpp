#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count=0;
	bool check = false, check_2 = false;
	string number;
	cin >> number;
	n = number.length();

	for (int i=0; i<n; i++) {
			if (number[i]!='0')
				check_2 = true;
				
			if (check_2 && number[i]=='5' || check_2 && number[i]=='9') 
				count +=1;
			
			if (check_2 && number[i]!='5' || check_2 && number[i]!='9') 
				check = true;		
	}

	if (check && count!=9 && count!=5)
		cout << "NO";
			
	if (check && count==9 || check && count==5)
		cout << "YES";
			
	if (check == false)
		cout << "NO";
	
	return 0;
}
