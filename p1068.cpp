#include <bits/stdc++.h> 
using namespace std;

struct Volunteer{
	int serialno;
	int score;
} volunteers[5000];

void quickSortScoreDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = volunteers[(low + high) / 2].score;
	
	do{
		while(volunteers[i].score > pivot) i++;
		while(volunteers[j].score < pivot) j--;
		if(i <= j){
			swap(volunteers[i], volunteers[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortScoreDesc(low, j);
	if(i < high)  quickSortScoreDesc(i, high);	
} 


void quickSortSerialnoAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = volunteers[(low + high) / 2].serialno;
	
	do{
		while(volunteers[i].serialno < pivot) i++;
		while(volunteers[j].serialno > pivot) j--;
		if(i <= j){
			swap(volunteers[i], volunteers[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortSerialnoAsc(low, j);
	if(i < high)  quickSortSerialnoAsc(i, high);	
} 

int n(0), m(0), pass(0);

int main(void){
	cin >> n >> m;
	pass = m * 1.5;
	for(int i = 0; i < n; i++){
		cin >> volunteers[i].serialno >> volunteers[i].score;
	}
	quickSortScoreDesc(0, n - 1);
	
	int j = pass;
	while(volunteers[j].score == volunteers[j - 1].score) j++;
		
	for(int i = 0; i < j; i++){
		int k = i;
		while(volunteers[k + 1].score == volunteers[k].score) k++;
		if(i != k){
			quickSortSerialnoAsc(i, k);
			i = k;
		}
	}
	cout << volunteers[j - 1].score << ' ' << j << endl;
	for(int i = 0; i < j; i++){
		cout << volunteers[i].serialno << ' ' << volunteers[i].score << endl;
	}
	
	return 0;
}
