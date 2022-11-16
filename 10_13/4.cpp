#include <bits/stdc++.h>
using namespace std;
int re(int n){
	int r = 0;
	while(n != 0){
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
int main(){
	int n;
	cin >> n;
	cout << re(n) + n;
	return 0;
}

