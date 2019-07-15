#include <bits/stdc++.h> 
using namespace std;

int main(void){
	int balance(0), deposit(0), budget(0), deficit_month(0); 
	for(int i = 0; i < 12; i++){		
		cin >> budget;
		if(deficit_month == 0){
			balance += 300;
			if(balance < budget){
				deficit_month = i + 1;
				
			}else{
				int transfer = (balance - budget) /100 * 100;
				//cout << "transfer:" << transfer << endl;
				deposit += transfer;
				balance -= transfer;
				//cout << "balance:" << balance << endl;
			}
			balance -= budget;
		}		
	}
	
	if(deficit_month ==0){
		cout << deposit * 1.2 + balance << endl;
	}else{
		cout << '-' << deficit_month << endl;
	}
	return 0;
}
