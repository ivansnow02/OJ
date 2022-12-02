/**
有 12 人围坐成一圈玩报数游戏，从1号人员开始顺时针报数，报到k的人员被淘汰出局；接着仍沿顺时针方向从被淘汰出局者的下一人员又重新从 1 开始报数，报到 k的人被淘汰；
如此继续，直到最后只剩下一个人时停止。请编写程序输出最后所剩那个人的编号。
注意：（1）假设参加游戏的人的编号沿顺时针方向依次为 1 到 12，可以使用数组来存放各数据；（2）k>1，由用户通过 cin 输入指定。
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt = 0;
	cin >> n;
	int men[12];
	for (int i = 0; i < 12; i++)
	{
		men[i] = i + 1;
	}
	int i = 0;
	int j = 0;
	for (; cnt < 11;)
	{
		if (men[i] != 0)
			j++;
		if (j == n)
		{
			men[i] = 0;
			cnt++;
			j = 0;
		}
		i++;
		if (i == 12)
			i = 0;
	}
	for (int i = 0; i < 12; i++)
	{
		if (men[i] != 0)
		{
			cout << men[i];
		}
	}
}
