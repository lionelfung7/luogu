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

void combination(int arr[], int data[], int start,int end, int index, int r){
	if (index == r){
		int sum(0);
		for(int j = 0; j < r; j++){
			sum += data[j];		
		}
		
		if(isPrime(sum)) ans++;
		return;
	}
	
	for(int i = start; i <= end; i++){
		data[index] = arr[i];
		combination(arr, data, i + 1, end, index + 1, r);
	} 
}

int main(void){
	int n(0),r(0);
	
	cin >> n >> r;
	int x[n]{0};
	for(int i = 0; i < n; i++){
		cin >> x[i];
	//	cout << x[i] << endl;
	}
	
	int data[r]{0};
	combination(x, data, 0, n-1, 0, r);
	
	cout << ans << endl;

	return 0;
}
