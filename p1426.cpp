#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int s(0), x(0);
	cin >> s >> x;
	double d(0.0);
	double speed(7.0);
	while(d < s - x){
		d += speed;
		speed *= 0.98; 		
	}
	if(s + x - d < speed){
		cout << 'n';
	}else{
		cout << 'y';
	} 
	return 0;
}
