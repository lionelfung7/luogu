#include <bits/stdc++.h> 
using namespace std;

int n(0);
int64_t ans(0);
struct WaterTaker{
	int serialno;
	int64_t t;
}water_taker[1000];


void quickSortWaterAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = water_taker[(low + high) / 2].t;
	
	do{
		while(water_taker[i].t < pivot) i++;
		while(water_taker[j].t > pivot) j--;
		if(i <= j){
			swap(water_taker[i], water_taker[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortWaterAsc(low, j);
	if(i < high)  quickSortWaterAsc(i, high);	
} 

/*
void quickSortSerialnoAsc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = water_taker[(low + high) / 2].serialno;
	
	do{
		while(water_taker[i].serialno < pivot) i++;
		while(water_taker[j].serialno > pivot) j--;
		if(i <= j){
			swap(water_taker[i], water_taker[j]);
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortSerialnoAsc(low, j);
	if(i < high)  quickSortSerialnoAsc(i, high);	
} 
*/

int main(void){
	cin >> n;
	for(int i = 0; i < n; i++){
		water_taker[i].serialno = i + 1;
		cin >> water_taker[i].t;
	}
	quickSortWaterAsc(0, n - 1);
	
	/*
	for(int i = 0; i < n; i++){
		int k = i;
		while(water_taker[k + 1].t == water_taker[k].t) k++;
		if(i != k){
			quickSortSerialnoAsc(i, k);
			i = k;
		}
	}*/
	
	for(int i = 0; i < n; i++){
		cout << water_taker[i].serialno << ' ';
		ans += water_taker[i].t * (n - i - 1);
	}
	
	
	cout << endl << fixed << setprecision(2) << (double)ans/n;
	return 0;
}
