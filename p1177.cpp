#include <bits/stdc++.h> 
using namespace std;

int n(0), a[100000]; 

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
	/* 
	while(i < j){
		while(arr[j] >= arr[low] && i < j) j--;
		while(arr[i] <= arr[low] && i < j) i++;
		
		t = arr[i];
		if(i == j){
			arr[i] = arr[low];
			arr[low] = t;
		}else{
			arr[i] = arr[j];
			arr[j] = t;
		}
		//swap(arr, i , (i==j) ? low : j);
	}*/ 	

} 

int main(void){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quickSort(0, n - 1);
	for(int i = 0; i < n - 1; i++){
		cout << a[i] << ' ';
	}
	cout << a[n-1] << endl;
	return 0;
}
