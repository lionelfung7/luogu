#include <bits/stdc++.h> 
using namespace std;

int n(0), _math(0), _english(0);

struct Student{
	int serialno;
	int chinese;
	int all;
}students[301]; 

void quickSortAllDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = students[(low + high) / 2].all;
	
	do{
		while(students[i].all > pivot) i++;
		while(students[j].all < pivot) j--;
		if(i <= j){
			swap(students[i], students[j]);	
			i++;
			j--; 
		}
	}while(i <= j); 
	if(low < j) quickSortAllDesc(low, j);
	if(i < high)  quickSortAllDesc(i, high);	
} 

void quickSortChineseDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = students[(low + high) / 2].chinese;
	
	do{
		while(students[i].chinese > pivot) i++;
		while(students[j].chinese < pivot) j--;
		if(i <= j){
			swap(students[i], students[j]);	
			i++;
			j--; 
		}
	}while(i <= j); 
	if(low < j) quickSortChineseDesc(low, j);
	if(i < high)  quickSortChineseDesc(i, high);	
} 

void quickSortSerialnoAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = students[(low + high) / 2].serialno;
	
	do{
		while(students[i].serialno < pivot) i++;
		while(students[j].serialno > pivot) j--;
		if(i <= j){
			swap(students[i], students[j]);
			i++;
			j--; 
		}
	}while(i <= j); 
	if(low < j) quickSortSerialnoAsc(low, j);
	if(i < high)  quickSortSerialnoAsc(i, high);	
} 

int main(void){
	cin >> n;
	for(int i = 1; i <= n; i++){
		students[i].serialno = i;
		cin >> students[i].chinese >> _math >> _english;
		students[i].all = students[i].chinese + _math + _english;
	}
	
	quickSortAllDesc(1, n);
	
	for(int i = 1; i <= n; i++){
		int m = i;
		while(students[m + 1].all == students[m].all) m++;
		if(i != m){
			quickSortChineseDesc(i, m);
			/*
			for(int j = i; j <= m; j++){
				int k = j;
				while(students[k + 1].chinese == students[k].chinese) k++;
				if(j != k){
					quickSortSerialnoAsc(j, k);
					j = k;
				}
			}*/
			i = m;
		}
	}
	
	for(int i = 1; i <= 5; i++){
		cout << students[i].serialno << ' ' << students[i].all << endl;
	}
	
	return 0;
}
