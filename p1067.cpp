#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int n(0);
	cin >> n;
	int m;
	for(int i = n; i >= 0; i--){
		cin >> m;
		if(m == 0 && n != 0) continue;
		
		if(m > 0 && i != n ){
			cout << '+' ;
		}
		
		if(m == -1 && i != 0){
			cout << '-';
		}else if(m != 1 || i == 0) {
			cout << m;
		}
		
		if(i == 1){
			cout << "x";
		}else if( i != 0)
			cout << "x^" << i;
	} 
	return 0;
}
