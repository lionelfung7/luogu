#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int n) 
{ 	 
	for (int i = 3; i <= sqrt(n) ; i = i + 2){
		if (n % i == 0) {
			return false;
		}        	
	}     	 
    return true; 
} 


int main(void){
	int a(0), b(0);
	cin >> a >> b;
	
	int p(0),j(0),k(0);
	
	for(int i = a + 1 - a % 2; i <= min(b,9989899); i = i + 2){
		p = 0;
		k = 0;
		j = i;
		
		while(j > 0){
			p = j % 10;
			j /= 10;
			k = k * 10 + p;
		}
		/*
		for(int k = 0; k < pc/2; k++){
			if(c[k] != c[pc-k-1]) {
				isPalindrome = false;
				break;
			}
		}*/
		if(k == i && isPrime(i))
			cout << i << endl;
	}
	return 0;
}
