#include <bits/stdc++.h> 
using namespace std;

int n(0);
string s[20];

void quickSortDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	string pivot = s[(low + high) / 2];
	
	do{
		while(s[i] + pivot > pivot + s[i]) i++;
		while(s[j] + pivot < pivot + s[j]) j--;
		if(i <= j){
			swap(s[i], s[j]);	
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortDesc(low, j);
	if(i < high)  quickSortDesc(i, high);	
} 

int main(void){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	
	quickSortDesc(0, n - 1);
	
	for(int i = 0; i < n; i++){
		cout << s[i];
	}
	return 0;
}
