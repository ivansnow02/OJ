/**
 * 对于整型数组a[10]和b[10]，编制程序完成下列任务:
  （1）由用户从键盘为两个数组输入值；
  （2）求出两个数组的最大值和最小值；
  （3）把数组a和b中的整数分别从小到大和从大到小排序；
  （4）把两个有序的数组a和b组成一个长度为20的有序数组c[20]，使数组c的顺序为从小到大。
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> a(10),b(10);
	for(int i = 0; i < 10; i++){
		cin>>a[i];
	}
	for(int i = 0; i < 10; i++){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),[=](int x,int y)->bool{return x > y;});
	cout<<a[9]<<' '<<a[0]<<endl;
	cout<<b[0]<<' '<<b[9]<<endl;
	for(int x : a){
		cout<<x<<' ';
	}
	cout<<endl;
	for(int x : b){
		cout<<x<<' ';
	}
	cout<<endl;
	a.insert(a.end(),b.begin(),b.end());
	sort(a.begin(),a.end());
	for(int x : a){
		cout<<x<<' ';
	}
	
}
