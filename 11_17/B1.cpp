/**
 * 题目描述
  定义狮子 Lion 与老虎 Tiger 两个类，二者都有 weight 私有整型属性，
  定义二者的一个友元函数 totalWeight(参数表)，计算二者的重量和。
  设计程序，定义狮子与老虎两个对象之后，调用 totalWeight(参数表)，计算二者的重量和，然后输出。
  其中狮子与老虎的 Weight 是在各自的类成员函数中读数赋值。
  输入
  两个整数。分别为狮子与老虎对象的重量
  输出
  输出一个整数，是两个对象重量之和。
 */

#include <bits/stdc++.h>
using namespace std;
class Tiger;
class Lion
{
private:
	int weight;

public:
	Lion(int w)
	{
		weight = w;
	}
	friend int totalWeight(Tiger &t, Lion &l);
};
class Tiger
{
private:
	int weight;

public:
	Tiger(int w)
	{
		weight = w;
	}
	friend int totalWeight(Tiger &t, Lion &l);
};
int totalWeight(Tiger &t, Lion &l)
{
	return t.weight + l.weight;
}
int main()
{
	int tw, lw;
	cin >> tw >> lw;
	Tiger t(tw);
	Lion l(lw);
	cout << totalWeight(t, l);
}
