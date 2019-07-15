#include <bits/stdc++.h> 
using namespace std;

int main(void){
	char score;
	int l11(0), w11(0), l21(0), w21(0);
	bool stop = false;
	string result11[15000];
	string result21[15000];
	int p11(0), p21(0);
	while(!stop){
		cin >> score;
		switch(score){
			case 'E': stop = true;
					  break;
			case 'W': w11++;
			          w21++;
			          break;
			case 'L': l11++;
			          l21++;
			          break;
		} 
		if(w11 >= 11 && w11 - l11 > 1 || l11 >= 11 && l11 - w11 > 1 || stop){
			result11[p11++] = to_string(w11) + ":" + to_string(l11);
			w11 = 0;
			l11 = 0;
		}
		
		if(w21 >= 21 && w21 - l21 > 1 || l21 >= 21 && l21 - w21 > 1 || stop){
			result21[p21++] = to_string(w21) + ":" + to_string(l21);
			w21 = 0;
			l21 = 0;
		}		
	}
	
	for(int i = 0; i < p11; i++) cout << result11[i] << endl;
	cout << endl;
	for(int i = 0; i < p21; i++) cout << result21[i] << endl; 
	
	return 0;
}
