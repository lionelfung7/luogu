#include <bits/stdc++.h> 
using namespace std;

int main(void){
	double x(0.0),d(0.0), last_d(2.0);
	int step(0);
	cin >> x;
	while(d < x){
		step++;
		d += last_d;
		last_d *= 0.98;
	}
	cout << step;
	return 0;
}
