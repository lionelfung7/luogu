#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int tree[10]{0}, h(0), ans(0);
	for(int i = 0; i < 10; i++){
		cin >> tree[i];
	}
	cin >> h;
	for(int i = 0; i < 10; i++){
		if(h + 30 >= tree[i]) ans++;
	}
	cout << ans;
	
	return 0;
}
