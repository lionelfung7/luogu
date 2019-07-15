#include <bits/stdc++.h> 
using namespace std;

int n(0), a[101], b[101];

void quickSort(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = a[(low + high) / 2];
	
	do{
		while(a[i] < pivot) i++;
		while(a[j] > pivot) j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSort(low, j);
	if(i < high)  quickSort(i, high);
} 

int main(void){
	cin >> n;
	a[0] = -1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	quickSort(1, n);
	
	int j(0);
	for(int i = 1; i <= n; i++){
		if(a[i] != a[i - 1]) b[j++] = a[i];
	}
	cout << j << endl;
	for(int i = 0; i < j; i++){
		cout << b[i] << ' ';
	}
	
	return 0;
}
