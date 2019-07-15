#include <bits/stdc++.h> 
using namespace std;

struct Region{
	int b;
	int e;
};

int main(void){
	int l(0),m(0), ans(0);
	cin >> l >> m;
	Region r[m];
	for(int i = 0; i < m; i++){
		cin >> r[i].b >> r[i].e;
	}
	
	for(int i = 0; i <= l; i++){
		bool railway(false);
		for(int j = 0; j < m; j++){
			if(i >= r[j].b && i <= r[j].e){
				railway = true;
				break;
			}			
		}
		if(!railway) ans++;
	}
	cout << ans;
	
	return 0;
}
