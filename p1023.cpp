#include <iostream> 
using namespace std;

int main(void){
	int advice_price(0), cost(0), price(0), last_price(0), _sales(0), dec(0), ans(0) ;
	int sales[100000]{0};
	cin >> advice_price;
	cin >> cost >> sales[cost];
	while(true){
		cin >> price >> _sales;
		if(price == -1 && _sales == -1) break;
		last_price = price;
		sales[last_price] = _sales;	
	}
	cin >> dec;
	
	if(advice_price < last_price){		
		if(sales[advice_price] == 0){
			int i = advice_price;
			int j = advice_price;
			while(sales[i] == 0) i--;
			while(sales[j] == 0) j++;
			int d = (sales[i] - sales[j]) / (j - i);
			sales[advice_price-1] = sales[i] - d * (advice_price - i - 1);
			sales[advice_price] = sales[i] - d * (advice_price - i);
			sales[advice_price+1] =	sales[i] - d * (advice_price - i + 1);
		}else{
			int i = advice_price - 1;
			int j = advice_price + 1;
			while(sales[i] == 0) i--;
			while(sales[j] == 0) j++;
			int d1 = (sales[i] - sales[advice_price]) / (advice_price - i);
			int d2 = (sales[advice_price] - sales[j]) / (j - advice_price);
			sales[advice_price-1] = sales[i] - d1 * (advice_price - i - 1);
			sales[advice_price+1] =	sales[advice_price] - d2;
		}
	}else if(advice_price == last_price){
		int i = advice_price - 1;
		while(sales[i] == 0) i--;
		int d1 = (sales[i] - sales[advice_price]) / (advice_price - i);
		sales[advice_price-1] = sales[i] - d1 * (advice_price - i - 1);
		sales[advice_price+1] =	sales[advice_price] - dec;
	}else{
		sales[advice_price-1] = sales[last_price] - dec * (advice_price - last_price -1);
		sales[advice_price] = sales[last_price] - dec * (advice_price - last_price);
		sales[advice_price+1] = sales[last_price] - dec * (advice_price - last_price +1);	
	}
	
	if(sales[advice_price+1] < 0) {
		cout << "NO SOLUTION";
	}else{
		while((advice_price - 1 - cost + ans) * sales[advice_price-1] < (advice_price - cost + ans) * sales[advice_price]
			&& (advice_price - cost + ans) * sales[advice_price] < (advice_price - cost + 1 + ans) * sales[advice_price+1]){
			ans++;
		}
	
		while((advice_price - 1 - cost + ans) * sales[advice_price-1] > (advice_price - cost + ans) * sales[advice_price]
			&& (advice_price - cost + ans) * sales[advice_price] > (advice_price - cost + 1 + ans) * sales[advice_price+1]){
			ans--;
		}
		
		cout << ans;
	}		
	
	return 0;
}
