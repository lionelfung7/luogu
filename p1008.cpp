#include <bits/stdc++.h> 
using namespace std;

int main(void){
	for(int a = 123; a <= 329; a++){
		int b = a * 2;
		int c = a * 3;
		int m = a * 1000000 + b * 1000 + c;
		int x = 0b000000000;
		while(m > 0) {
			x |= 1 << m % 10 - 1;
			m /= 10;
		}
		if(x == 0b111111111){
			cout << a << ' ' << b << ' ' << c << endl; 
		} 
	}
	return 0;
}
