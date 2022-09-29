#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1, m1, s1, h2, m2, s2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	cout << abs(h2 * 60 * 60 + m2 * 60 + s2 - h1 * 60 * 60 - m1 * 60 - s1);
}
