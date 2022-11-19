/**
 * 针对一个可能含有重复整数出现的一维整数数组【10个元素】，请输出只出现过一次的整数元素的数目。
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[114514]={};
	int temp;
	for(int i=0;i<10;i++){
		
		cin>>temp;
		a[temp]++;
	}
	int cnt = 0;
	for(int i=0;i<114514;i++){
		if(a[i]==1){
			cnt++;
		}
	}
	cout<<cnt;
}
