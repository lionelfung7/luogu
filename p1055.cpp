#include <bits/stdc++.h> 
using namespace std;

char check_code[11] = {'0','1','2','3','4','5','6','7','8','9','X'};

int main(void){
	char isbn[13];
	int n(0),m(0);
	for(int i = 0; i < 13; i++){
		cin >> isbn[i];
		if(i == 1 || i == 5 || i == 11 || i == 12) continue;
		m += (isbn[i]-'0') * ++n;
	}
	if(isbn[12] == check_code[m % 11] ){
		cout << "Right";
	}else{
		for(int i = 0; i < 12; i++) cout << isbn[i];
		cout << check_code[m % 11];
	}
	return 0;
}
