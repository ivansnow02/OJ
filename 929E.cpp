/**
 * 编写一个程序，当用户按照“时、分、秒”格式输入两个时刻后，求出这两个时刻的时间差（按秒计算）并打印到屏幕上。
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1, m1, s1, h2, m2, s2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	cout << abs(h2 * 60 * 60 + m2 * 60 + s2 - h1 * 60 * 60 - m1 * 60 - s1);
}
