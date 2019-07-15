#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int stack[100],tail(0), input(0);
	while(1){
		cin >> input;
		if(input == 0) break;
		stack[tail++] = input;
	}
	
	while(tail > 0){
		cout << stack[--tail] << ' ';
	}
	return 0;
}
