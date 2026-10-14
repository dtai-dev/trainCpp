#include <iostream>
using namespace std;

int main() {
    long long n;
    bool check = true;
    cin >> n;
    
    ios::sync_with_stdio(false);
    
    for (long long i=2; i*i<=n; i++) {
        if (n%i==0 && check) {
            cout << i;
            n/= i;
            check = false;
        }
        
        while (n%i==0) {
            cout << " " << i;
            n /= i;
        }
    }
    
    if (n > 1 && check == false) {
        cout << " " << n;
    } else if (n > 1 && check == true) {
        cout << n;
    }
        
    return 0;
}
