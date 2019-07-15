#include <bits/stdc++.h> 
using namespace std;

int main(void){
	bool cached[1002]{false};
	int memory[100], p(0);
	int m(0), n(0), w(0), ans(0);
	fill_n(memory, 100, 1001);

	cin >> m >> n;
	for(int i = 0; i < n; i++){
		cin >> w;
		if(!cached[w]) {
			//cout << "p: " << p << endl;
			cached[memory[p]] = false;
			//cout << memory[p] << " out" << endl;
			memory[p] = w;
			cached[w] = true;
			//cout << w << " in" << endl;
			p = (p + 1) % m;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;

}
