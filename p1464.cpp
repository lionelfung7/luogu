#include <bits/stdc++.h> 
#define MEM(x,y,z) (mem[x][y][z] != -1 ? mem[x][y][z] : mem[x][y][z] = w(x, y, z))
using namespace std;


int64_t mem[21][21][21];

int64_t w(int64_t a, int64_t b, int64_t c){
	if(a <= 0 || b <= 0 || c <= 0) return 1;
	if(a > 20 || b > 20 || c > 20) return MEM(20, 20, 20);
	if(a < b && b < c){
		return MEM(a, b, c - 1) + MEM(a, b - 1, c - 1) - MEM(a, b - 1, c);
	}else{
		return MEM(a-1, b, c) + MEM(a-1, b-1, c) + MEM(a-1, b, c-1) - MEM(a-1, b-1, c-1);
	}
}

int main(void){
	int64_t a(0), b(0), c(0);
	memset(mem, -1 ,sizeof(mem));
	while(true){
		cin >> a >> b >> c;
		if(a == -1 && b == -1 && c == -1) break;
		cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
	return 0;
}
