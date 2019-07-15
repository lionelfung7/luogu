#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int n(0), s(0), a(0), b(0), xi(0), yi(0);
	int ans(0);
	int y[5000];
	cin >> n >> s >> a >> b;
	int j = 0;
	for(int i = 0; i < n; i++){
		cin >> xi >> yi;
		if(xi <= a + b) y[j++] = yi;
	}

	sort(y, y + j);
	
	for(int i = 0; i < j; i++){		
		s -= y[i];
		if(s < 0) break;
		ans++;		
	} 
	cout << ans;
	return 0;
}
