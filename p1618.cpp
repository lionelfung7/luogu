#include <bits/stdc++.h> 
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(void){
	int x(0), y(0), z(0), cnt(0), g(0);
	cin >> x >> y >> z;
	g = gcd(x, gcd(y, z));
	if(g > 1){
		x /= g;
		y /= g;
		z /= g;
	}
	
	for(int i = 123 + min(123 % x , 1) * x; i <= 987; i += x){
		int a = i;
		int b = i / x * y;
		int c = i / x * z;
		if (b < 100 || b > 999 || c < 100 || c > 999) break;
		int m = a  * 1000000 + b * 1000 + c;
		int x = 0b000000000;
		while(m > 0) {
			x |= 1 << (m % 10 - 1);
			m /= 10;
		}
		if(x == 0b111111111){
			cout << a << ' ' << b << ' ' << c << endl; 
			cnt++;
		} 
	}
	if(cnt == 0) cout << "No!!!";
	return 0;
}
