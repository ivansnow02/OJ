/**
 * 编程序，实现如下功能：
  （1）定义两个一维数组x，y，不超过50个元素。
  （2）从键盘输入k个整数到数组x中。
  （3）计算x中数据的平均值ave及大于平均值的元素个数n并输出。
  （4）将数组x中数据复制到数组y中，重复的数据只存储一次，最后输出y中的数据。
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	double ave = 0;
	cin >> k;
	vector<int> x(k);
	for (int q = 0; q < k; q++) {
		cin >> x[q];
		ave += x[q];
	}
	ave /= k;
	cout << ave << ' ';
	int cnt = 0;
	for (int n : x) {
		if (n > ave) {
			cnt++;
		}
	}
	cout << cnt << endl;
	for (int i = 0; i < k; i++) {
		int flag = 1;
		for (int j = 0; j < i; j++) 
			if (x[j] == x[i]) 
				flag = 0;
		if (flag) 
			cout << x[i] << " ";
	}
}
