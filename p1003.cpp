#include <iostream> 
using namespace std;

struct Rug{
	int a;
	int b;
	int g;
	int k;
};

int main(void){
	int n(0), k(0), x(0), y(0), ans(-1);
	Rug rug[10000];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> rug[i].a >> rug[i].b >> rug[i].g >> rug[i].k; 
	}
	cin >> x >> y;
	for(int i = n - 1; i >= 0; i--){
		if(x >= rug[i].a && y >= rug[i].b && x <= rug[i].a + rug[i].g && y <= rug[i].b + rug[i].k){
			ans = i + 1;
			break;
		}
	}
	cout << ans;
	return 0;
}
