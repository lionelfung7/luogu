#include <bits/stdc++.h> 
using namespace std;

int ans(0);

bool isPrime(int n) 
{ 	
	if (n == 2) return true;
	if (n % 2 == 0) return false; 
	for (int i = 3; i <= sqrt(n) ; i = i + 2){
		if (n % i == 0) {
			return false;
		}        	
	}     	 
    return true; 
}  

int main(void){
	int n(0),r(0);
	
	cin >> n >> r;
	int x[n]{0};
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
		
	int b[n+1];
	for(int i = 1; i <= n; i++) b[i] = i;
	b[0] = -1;
	while(b[0] == -1){
		int sum(0);
		for(int i = 1; i <= r; i++){
			sum += x[b[i]-1];
		}
		
		if(isPrime(sum)){
			//cout << sum << endl;
			ans++;
		} 
		
		int j = r;
		while(b[j] == n - r + j) j--;
		b[j]++;
		for(int i = j + 1; i <= r; i++){
			b[i] = b[i-1] + 1;
		} 
	}
	cout << ans << endl;

	return 0;
}
