#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y;
	const double pi = 3.1415926;
	cin >> x >> y;
	cout << pow(x, 2) + x - y << " " << double(2 * pi*x + pi*pow(y, 2));

}
