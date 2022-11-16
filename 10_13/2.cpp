#include <bits/stdc++.h>
using namespace std;
void find(int i, int n){
	int cnt = 0;
	int flag;
	for (int j = i; ; j ++){
		flag = 0;
		for (int k = 2; k <= sqrt(j) ;k++){
			if (j % k == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			cout << j << ' ';
			cnt ++;
		}
		if (cnt == n) break; 
	}
}
int main(){
	int i, n;
	cin >> i >> n;
	find(i, n);
	return 0;
}

