#include <bits/stdc++.h> 
using namespace std;

int main(void){
	float a(0);
	cin >> a;
	float ans(0.0);
	if(a > 400){
		ans = (a - 400) * 0.5663 + (400 - 150) * 0.4663 + 150 * 0.4463;
	}else if (a > 150){
		ans = (a - 150) * 0.4663 + 150 * 0.4463;
	}else{
		ans = a * 0.4463;
	}
	cout << floor(ans*10+0.5)/10.0 << endl;
	return 0;
}
