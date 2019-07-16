#include <bits/stdc++.h> 
using namespace std;

unordered_map<char,char> dict, r_dict;

int main(void){
	string cipher, plain, to_be_decrypted;
	bool failed(false);
	getline(cin, cipher);
	getline(cin, plain);
	getline(cin, to_be_decrypted);
	
	for(string::size_type i = 0; i < cipher.size(); i++){
		if(!dict[cipher[i]] && !r_dict[plain[i]]){
			dict[cipher[i]] = plain[i];
			r_dict[plain[i]] = cipher[i]; 
		}else{
			if(dict[cipher[i]] != plain[i] || r_dict[plain[i]] != cipher[i]){
				failed = true;
				break;
			}
		}
	}
	
	if(failed || dict.size() < 26){
		cout << "Failed";
	}else{
		//cout << "SIZE:" << to_be_decrypted.size() << endl;
		for(string::size_type i = 0; i < to_be_decrypted.size(); i++){
			if(!dict[to_be_decrypted[i]]){
				failed = true;
				break;
			}else{
				to_be_decrypted[i] = dict[to_be_decrypted[i]]; 				
			}
		} 
		if(failed){
			cout << "Failed";
		}else{
			cout << to_be_decrypted;
		}
	}	
	
	return 0;
}
