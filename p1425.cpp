#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int a(0), b(0), c(0), d(0), minute(0);
	cin >> a >> b >> c >> d;
	minute = c * 60 + d - a * 60 - b;
	cout << minute / 60 << ' ' << minute % 60 << endl;
	return 0;
}
