#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int n) 
{ 
	if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n) ; i = i + 2) 
        if (n % i == 0) 
            return false;  
    return true; 
}  

int main(void){
	//bool prime[10000];

	int n(0),a(0),b(0),c(0);
	cin >> n;
	c = n - 4;
	if(isPrime(c)){
		cout << 2 << ' ' << 2 << ' ' << c;
	}else{
		for(a = 3; a < n/3; a++){
			if(!isPrime(a)) continue;
			for(b = 3; b < n/3; b++){
				if(!isPrime(b)) continue;
				c = n - a - b;
				if(isPrime(c)){
					cout << a << ' ' << b << ' ' << c << endl;
					return 0;
				}
			}
		}			
	}
	
	return 0;
}
