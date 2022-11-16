#include <bits/stdc++.h>
using namespace std;
int eating(int day){
	if (day == 10){
		return 1;
	}
	else
		return 2 * (eating(day + 1) + 1);
}
int main(){
	int d;
	cin >> d;
	cout<< eating(d);
	return 0;
}

