#include <bits/stdc++.h> 
using namespace std;

int main(void){
	string comet,group;
	int i(1),j(1);
	cin >> comet >> group;
	for(char c : comet){
		i *= c-'A' + 1;	
	}
	for(char g : group){
		j *= g - 'A' + 1;
	}
	if(i % 47 == j % 47){
		cout << "GO";
	}else{
		cout << "STAY";
	}
	return 0;
}
