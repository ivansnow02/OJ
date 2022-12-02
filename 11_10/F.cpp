/**
编写具有如下原型的函数：
int f(unsigned long x, int n,int & Lxn);
它负责将整数x的第n位（从左边数第n位，n>0）的数值放到引用Lxn中（将作为结果返回到主调函数的对应实参变量中），
并将倒数第n位（从右边数第n位，n>0）的数值作为函数结果返回去。
例如当x=123456789,n=7时，执行语句Rxn=f(x,n, Lxn);
将使返回的Lxn为7，并使Rxn变为3；而执行语句 Rxn=f(12345，6，Lxn)；将使Lxn与Rxn都变为0（超出数的“长度”即总位数时返回0）
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
