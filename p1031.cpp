#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int n(0), sum(0), card[10001], avg(0);
	int ans(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> card[i];
		sum += card[i];
	}
	avg = sum / n;
	for(int i = 0; i < n; i++){
		if(card[i] == avg) continue;
		card[i+1] += card[i] - avg; 
		card[i] = avg;
		ans++; 
	}
	cout << ans;
	
	return 0;
}
