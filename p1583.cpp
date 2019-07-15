#include <bits/stdc++.h> 
using namespace std;

int n(0), k(0), e[11], _w(0);

struct Person{
	int serialno;
	int w;
}person[20001];

void quickSortWDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = person[(low + high) / 2].w;
	
	do{
		while(person[i].w > pivot) i++;
		while(person[j].w < pivot) j--;
		if(i <= j){
			swap(person[i], person[j]);	
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortWDesc(low, j);
	if(i < high)  quickSortWDesc(i, high);	
} 

void quickSortSerialnoAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = person[(low + high) / 2].serialno;
	
	do{
		while(person[i].serialno < pivot) i++;
		while(person[j].serialno > pivot) j--;
		if(i <= j){
			swap(person[i], person[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortSerialnoAsc(low, j);
	if(i < high)  quickSortSerialnoAsc(i, high);	
} 

int main(void){
	cin >> n >> k;
	for(int i = 1; i <= 10; i++){
		cin >> e[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> _w;
		person[i].serialno = i;
		person[i].w = _w;
	}
	
	quickSortWDesc(1, n);
	
	for(int i = 1; i <= n; i++){
		int m = i;
		while(person[m + 1].w == person[m].w) m++;
		if(i != m){
			quickSortSerialnoAsc(i, m);
			i = m;
		}
	}
	
	
	for(int i = 1; i <= n; i++){
		person[i].w += e[(i - 1) % 10 + 1];
	}

	
	/*	
	for(int i = 1; i <= n; i++){
		cout << person[i].w << ' ';
	}
	cout << endl;
	*/
	
	quickSortWDesc(1, n);
	
	int j = k;
	while(person[j + 1].w == person[j].w) j++;
	
	for(int i = 1; i <= j; i++){
		int m = i;
		while(person[m + 1].w == person[m].w) m++;
		if(i != m){
			quickSortSerialnoAsc(i, m);
			i = m;
		}
	}

	for(int i = 1; i <= k; i++){
		cout << person[i].serialno << ' ';
	}
		
	return 0;
}
