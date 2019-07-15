#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int n(0),i(1),j(0),k(0);
	cin >> n;
	while(k < n){
		k = i * i - j;
		j = k;
		i++;
	}
	if(i % 2 != 0){
		cout << i - 1 - k + n  << '/' << 1 + k - n;
	}else{
		cout << 1 + k - n  << '/' << i - 1 - k + n ;
	}
		
	return 0;
}
