/**
 *  编程序，从键盘输入整数x、y，计算出x2+x–y以及w=2πx+πy2，并将结果显示在屏幕上。
 * π的取值为3.1415926
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y;
	const double pi = 3.1415926;
	cin >> x >> y;
	cout << pow(x, 2) + x - y << " " << double(2 * pi * x + pi * pow(y, 2));
}
