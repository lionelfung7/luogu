#include <bits/stdc++.h> 
using namespace std;

/************
* n <= 9 
int addPrefix(int n, int count){
	int m = n % 10;
	for(int i = 1; i <= m/2; i++){
		count = addPrefix(n * 10 + i, count + 1);
	}
	return count;
}

int main(void){
	int n(0),ans(0);
	cin >> n;
	ans = addPrefix(n,1);
	cout << ans;	
	return 0;
}
*/

/**************
* TLE
int f(int n){
	if(n == 1) return 1;
	int sum = 1;
	for(int i = 1; i<= n/2; i++){
		sum += f(i);
	}
	return sum;
}


int main(void){
	int n(0),ans(0);
	cin >> n;
	ans = f(n);
	cout << ans;
	
}
*/

int main(void){
	int n(0);
	int f[1001];
	cin >> n;
	for(int i = 1; i <= n; i++){
		f[i] = 1;
		for(int j = 1; j <= i/2; j++){
			f[i] += f[j]; 
		}
	}
	cout << f[n];
	return 0;	
}


