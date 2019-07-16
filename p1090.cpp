#include <iostream> 
using namespace std;

int n(0);
int64_t a[20000], ans(0);

void quickSortAsc(int64_t low, int64_t high) 
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
	if(low < j) quickSortAsc(low, j);
	if(i < high)  quickSortAsc(i, high);	
} 

int main(void){
//	freopen("p1090.in", "r", stdin);
//	freopen("p1090.out", "w", stdout);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	quickSortAsc(0, n - 1);
	
	int i(1);
	while(i < n){		
		a[i] += a[i - 1];
		ans += a[i];
		//cout << a[i] << '#' << endl;
		//quickSortAsc(i, n - 1);
		int j = i;
		while(j + 1 < n && a[j] > a[j + 1]){
			swap(a[j], a[j+1]);
			j++;
		}
		
		i++;
	}
	cout << ans;
	return 0;
}
