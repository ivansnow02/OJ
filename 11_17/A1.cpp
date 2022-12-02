/**
 * 题目描述
  定义一个 Lingjian 类，拥有整型的数据成员 Weight 和静态数据成员 AllWeights（初始化为 0），
  每定义一个对象时， 在AllWeights 中增加该零件的重量 Weight；在析构函数中减去 Weight；
  静态成员函数 GetAllWeights（）获取AllWeights。
  设计程序，定义两个对象之后， 输出类的 AllWeights。
  其中 Weight 是通过成员函数输入对单个零件重量赋值。
  输入
  两个整数。 分别为两个对象的重量
  输出
  输出一行，是AllWeights的值
 */

#include <bits/stdc++.h>
using namespace std;
class Lingjian
{
private:
	int Weight;
	static int AllWeights;

public:
	Lingjian(int w)
	{
		Weight = w;
		AllWeights += w;
	}
	~Lingjian()
	{
		AllWeights -= Weight;
	}
	static int GetAllWeights()
	{
		return AllWeights;
	}
};
int Lingjian::AllWeights = 0;
int main()
{
	int w1, w2;
	cin >> w1 >> w2;
	Lingjian l1(w1), l2(w2);
	cout << Lingjian::GetAllWeights();
}
