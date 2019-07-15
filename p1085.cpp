#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int unhappy_day(0), max_hours(0), a(0), b(0); 
	for(int i = 0; i < 7; i++) {
		cin >> a >> b;
		int ans = a + b;
		if(ans > 8 && ans > max_hours){
			max_hours = ans;
			unhappy_day = i + 1;
		}
	}
	cout << unhappy_day << endl;
	return 0;
}
