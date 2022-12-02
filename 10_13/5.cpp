#include <bits/stdc++.h>
using namespace std;
bool symm(long n)
{
	long num = n;
	long r = 0;
	while (n != 0)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return (r == num);
}
int main()
{
	long n;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (symm(i) && symm(7 * i) && symm(3 * i * i))
			cout << i << ' ';
	}
	return 0;
}
