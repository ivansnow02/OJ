/**
编写如下原型的函数：
void split(double x,int*iPart,double*fPart);
提取出数据x的整数部分与小数部分，分别放于*iPart与*fPart处，由于形参iPart与fPart都是指针，从而可实现将这两个结果“带回”到主函数中。
 
在主函数中
输入一个数
输出它的整数部分和小数部分，用空格隔开。
提示：一个double类型数，强制类型转换后就是int，也就是整数部分，差为小数部分。这两个值用指针iPart和指针fPart带回（通过修改指针的目标变量值。）
*/
#include<bits/stdc++.h>
using namespace std;
void split(double x,int*iPart,double*fPart){
	*iPart = int(x);
	*fPart = x-*iPart;
}
int main(){
	double a;
	cin>>a;
	int x;
	double y;
	int* i = &x;
	double* f = &y;
	split(a,i,f);
	cout<<*i<<' '<<*f; 
}
