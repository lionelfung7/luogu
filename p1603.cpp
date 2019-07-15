#include <bits/stdc++.h> 
using namespace std;

int i(0), code[6];
int64_t ans(0);

unordered_map<string, int> dict = {{"one", 1},{"two",4},{"three",9},{"four",16},{"five",25},{"six",36},{"seven",49},{"eight",64},
						{"nine",81},{"ten",0},{"eleven",21},{"twelve",44},{"thirteen",69},{"fourteen",96},{"fifteen",25},{"sixteen",56},
						{"seventeen",89},{"eighteen",24},{"nineteen",61},{"twenty",0},{"a",1},{"both",4},{"another",1},{"first",1},
						{"second",4},{"third",9}};

void quickSortCodeDesc(int low, int high) 
{  
	int i = low;
	int j = high;
	int pivot = code[(low + high) / 2];
	
	do{
		while(code[i] > pivot) i++;
		while(code[j] < pivot) j--;
		if(i <= j){
			swap(code[i], code[j]);	
			i++;
			j--; 
		}
	}while(i <= j) ; 
	if(low < j) quickSortCodeDesc(low, j);
	if(i < high)  quickSortCodeDesc(i, high);	
} 


int main(void){	
	string _w;
	while(i < 6 && cin >> _w && _w != "."){
		code[i] = dict[_w];
		i++;		
	}
	quickSortCodeDesc(0, i - 1);
	
	for(int j = 0; j <= i - 1; j++){ 
		ans += pow(100,j) * code[j];
	}
	
	cout << ans;
	
	return 0;
}
