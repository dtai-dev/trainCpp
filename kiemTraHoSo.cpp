#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string Data[4];
    for (int i=0; i<4; i++) {
        cin >> Data[i];
	}

    long long int a, n, b, m, sum=0;
    a = Data[0][Data[0].length()-1] - '0';
    n = stoll(Data[1]);
    b = Data[2][Data[2].length()-1] - '0';
    m = stoll(Data[3]);
    n %= 4;
    if (n==0) {
    	n = 4;
	}
    m %= 4;
    if (m==0) {
    	m = 4;
	}
    
    switch(a) {
		case 0:
    		sum += 0;
			break;
    	case 1:
    		sum += 1;
    		break;
    	case 2:
    		if (n==1) {
    			sum += 2;
			} else if (n==2) {
    			sum += 4;
			} else if (n==3) {
    			sum += 8;
			} else if (n==4) {
    			sum += 6;
			}
			break;
		case 3:
    		if (n==1) {
    			sum += 3;
			} else if (n==2) {
    			sum += 9;
			} else if (n==3) {
    			sum += 7;
			} else if (n==4) {
    			sum += 1;
			}
			break;
		case 4:
    		if (n==1 || n==3) {
    			sum += 4;
			} else if (n==2 || n==4) {
    			sum += 6;
			}
			break;
		case 5:
    		sum += 5;
			break;
		case 6:
    		sum += 6;
			break;
		case 7:
    		if (n==1) {
    			sum += 7;
			} else if (n==2) {
    			sum += 9;
			} else if (n==3) {
    			sum += 3;
			} else if (n==4) {
    			sum += 1;
			}
			break;
		case 8:
    		if (n==1) {
    			sum += 8;
			} else if (n==2) {
    			sum += 4;
			} else if (n==3) {
    			sum += 2;
			} else if (n==4) {
    			sum += 6;
			}
			break;
		case 9:
    		if (n==1 || n==3) {
    			sum += 9;
			} else if (n==2 || n==4) {
    			sum += 1;
			}
			break;
	}
	
	switch(b) {
		case 0:
    		sum += 0;
			break;
    	case 1:
    		sum += 1;
    		break;
    	case 2:
    		if (m==1) {
    			sum += 2;
			} else if (m==2) {
    			sum += 4;
			} else if (m==3) {
    			sum += 8;
			} else if (m==4) {
    			sum += 6;
			}
			break;
		case 3:
    		if (m==1) {
    			sum += 3;
			} else if (m==2) {
    			sum += 9;
			} else if (m==3) {
    			sum += 7;
			} else if (m==4) {
    			sum += 1;
			}
			break;
		case 4:
    		if (m==1 || m==3) {
    			sum += 4;
			} else if (m==2 || m==4) {
    			sum += 6;
			}
			break;
		case 5:
    		sum += 5;
			break;
		case 6:
    		sum += 6;
			break;
		case 7:
    		if (m==1) {
    			sum += 7;
			} else if (m==2) {
    			sum += 9;
			} else if (m==3) {
    			sum += 3;
			} else if (m==4) {
    			sum += 1;
			}
			break;
		case 8:
    		if (m==1) {
    			sum += 8;
			} else if (m==2) {
    			sum += 4;
			} else if (m==3) {
    			sum += 2;
			} else if (m==4) {
    			sum += 6;
			}
			break;
		case 9:
    		if (m==1 || m==3) {
    			sum += 9;
			} else if (m==2 || m==4) {
    			sum += 1;
			}
			break;
	}
	
	string boxStr = to_string(sum);
	
	
	cout << boxStr[boxStr.length()-1]; 
	
    return 0;
}