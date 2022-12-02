/**
 * 在整数中插入千分位分隔符并输出【数字位数不超过100】。
 */

#include <bits/stdc++.h>
using namespace std;
// int main() {
//	string s;
//	cin >> s;
//	if (s[0] == '-') {
//		for (int i = s.length() - 3; i > 1; i -= 3) {
//			s.insert(i, ",");
//		}
//	} else for (int i = s.length() - 3; i > 0; i -= 3) {
//			s.insert(i, ",");
//		}
//	cout << s << endl;
// }
int main()
{
	string s, s1;
	cin >> s;
	if (s[0] == '-')
	{
		for (int i = s.length() - 1, j = 0; i >= 0; i--, j++)
		{

			if (j % 3 == 0 && j != 0 && j != s.length() - 1)
			{
				s1 += ",";
			}
			s1 += s[i];
		}
	}
	else
	{
		for (int i = s.length() - 1, j = 0; i >= 0; i--, j++)
		{

			if (j % 3 == 0 && j != 0 && j != s.length())
			{
				s1 += ",";
			}
			s1 += s[i];
		}
	}
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		cout << s1[i];
	}
}
