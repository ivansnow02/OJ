/**
��д��������ԭ�͵ĺ�����
int f(unsigned long x, int n,int & Lxn);
����������x�ĵ�nλ�����������nλ��n>0������ֵ�ŵ�����Lxn�У�����Ϊ������ص����������Ķ�Ӧʵ�α����У���
����������nλ�����ұ�����nλ��n>0������ֵ��Ϊ�����������ȥ��
���統x=123456789,n=7ʱ��ִ�����Rxn=f(x,n, Lxn);
��ʹ���ص�LxnΪ7����ʹRxn��Ϊ3����ִ����� Rxn=f(12345��6��Lxn)����ʹLxn��Rxn����Ϊ0���������ġ����ȡ�����λ��ʱ����0��
*/
#include <bits/stdc++.h>
using namespace std;
int f(unsigned long x, int n, int &Lxn)
{
	string s;
	while (x)
	{
		s += (char)(x % 10 + '0');
		x /= 10;
	}
	//	cout<<s[s.size()-n]<<endl<<s[n-1]<<endl;
	if (s.size() < n)
	{
		Lxn = 0;
		return 0;
	}
	Lxn = s[s.size() - n] - '0';
	return s[n - 1] - '0';
}
int main()
{
	unsigned long x;
	int n;
	int L;
	cin >> x >> n;
	int Rxn = f(x, n, L);
	cout << Rxn << ' ' << L;
}
