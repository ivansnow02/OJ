#include <bits/stdc++.h>
using namespace std;
int maxsum = 0;
int sum_do(int num){
	int sum = 0;
	for (int i = 1; i < num; i++){
		if(num % i == 0) sum += i;
	}
	return	sum;
}
int main(){
	int start, end;
	int a;
	cin >> start >> end;
	for (int i = start; i <= end; i++){
		if (sum_do(i) > maxsum){
			maxsum = sum_do(i);
			a = i;
		}
	}
	cout << a <<' '<< maxsum;
	return 0;
}

