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

int createPalindrome(int input) 
{ 
    int n = input; 
    int palin = input; 
  
    while (n > 0) 
    { 
        palin = palin * 10 + (n % 10); 
        n /= b; 
    } 
    return palin; 
} 

int main(void){
	int a(0), b(0);
	cin >> a >> b;
	
	int number; 
  
	int i = 1;
	
	while(){
		int n = i;
		int palin = i;
		i++;
	}

	
	return 0;
}
