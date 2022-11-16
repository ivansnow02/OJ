/**
编程序，按如下方法求A矩阵的转置矩阵B：
输入两个正整数m和n，而后通过使用指针配合new运算符生成一个m行n列的二维动态数组A以及另一个n行m列的二维动态数组B，
之后为A输入数据（A矩阵数据），逐行逐列输入，进而求出其转置矩阵B（即将A中的行存放成B中的列）并输出结果，逐行逐列输出，
每一行数字占一行，同一行的数空格隔开。
注意：输入保证全是整数。
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cin>>m>>n;
	int **a = new int*[m];
	for (int i = 0; i < m; i++){
		a[i] = new int[n];
	}
	int **b = new int*[n];
	for (int i = 0; i < n; i++){
		b[i] = new int[m];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			b[j][i]=a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<b[i][j]<<' ';
		}
		cout<<endl;
	}
}
