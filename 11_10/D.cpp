/**
��д����ԭ�͵ĺ�����
void split(double x,int*iPart,double*fPart);
��ȡ������x������������С�����֣��ֱ����*iPart��*fPart���������β�iPart��fPart����ָ�룬�Ӷ���ʵ�ֽ���������������ء����������С�
 
����������
����һ����
��������������ֺ�С�����֣��ÿո������
��ʾ��һ��double��������ǿ������ת�������int��Ҳ�����������֣���ΪС�����֡�������ֵ��ָ��iPart��ָ��fPart���أ�ͨ���޸�ָ���Ŀ�����ֵ����
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
