#include <bits/stdc++.h> 
using namespace std;

int main(void){
	string w, s;
	getline(cin, w);
	getline(cin, s);
	transform(w.begin(), w.end(), w.begin(),[](unsigned char c){ return std::tolower(c); });
	transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return std::tolower(c); });
	w = ' ' + w + ' ';
	s = ' ' + s + ' ';
	size_t found(-1);
	size_t first_found(-1);

	int ans(0);
	found = s.find(w);
	if(found != string::npos) first_found = found;
	while(found != string::npos){
		ans++;
		found = s.find(w, found + 1);	
	} 
	if(ans > 0){
		cout << ans << ' ' << first_found; 
	}else{
		cout << "-1";
	}
	
	return 0;
}
