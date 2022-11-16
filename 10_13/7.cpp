#include <bits/stdc++.h>
using namespace std;
int doit(int n){
	return pow(int(ceil(sqrt(double(n)))),2);
}
int main(){
	int n;
	cin>>n;
	cout<<doit(n);
	return 0;
}

