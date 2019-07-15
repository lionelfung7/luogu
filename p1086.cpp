#include <bits/stdc++.h> 
using namespace std;

struct Peanut{
	int x;
	int y;
	int count;
};

int main(void){
	int m(0), n(0), k(0), _cnt(0);
	Peanut peanuts[401];
	int ans(0);
	int p(1);
	for(int i = 0; i< 400; i++){
		peanuts[i].x = 0;
		peanuts[i].y = 0;
		peanuts[i].count = 0;
	}
	
	cin >> m >> n >> k;
	for(int i = 1; i <= m; i++){	
		for(int j = 1; j <= n; j++){
			cin >> _cnt;
			if(_cnt == 0) continue;
			int k;
			for(k = 1; k <= p; k++){
				if(_cnt > peanuts[k].count) break;
			}			
			for(int l = p ; l > k; l--){
				peanuts[l] = peanuts[l-1];
			}
			peanuts[k].x = i;
			peanuts[k].y = j;			
			peanuts[k].count = _cnt;			
			p++;		
		}
	}
	
	int i(1);
	while(peanuts[i].count > 0){
		//cout << "x: " << peanuts[i].x << ' ' << "y: " << peanuts[i].y << endl;
		int plan_a = abs(peanuts[i].y - peanuts[i-1].y) + abs(peanuts[i].x - peanuts[i-1].x) + peanuts[i].x;
		//cout << "plan_a:" << plan_a << endl;
		int plan_b = peanuts[i-1].x + peanuts[i].x * 2;
		//cout << "plan_b:" << plan_b << endl;
		//k -= min(plan_a , plan_b) - peanuts[i-1].x + 1;
		if(i == 1){
			k -= plan_b - peanuts[i-1].x + 1;
		}else{
			k -= plan_a - peanuts[i-1].x + 1;	
		}
			
		if(k >= 0){
			ans += peanuts[i].count;
			i++; 
		}else{
			break;
		}
	}
	cout << ans;
	return 0;
}
