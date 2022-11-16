#include <bits/stdc++.h>
using namespace std;
bool f(long x){
	while (x != 0){
		if((x % 10) % 2) return false;
		x /= 10;
	}
	return true;
} 
int main(){
	int x;
	cin >> x;
	cout << (f(x)?"true":"false");
	return 0;
}

