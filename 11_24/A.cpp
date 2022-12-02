/**
 * 题目描述
  小明经营着一个不大的水果店（似曾相识哦~），只销售苹果、香蕉和桔子。为了促销，小明制定了如下定价策略：
  1. 苹果：按斤论价，每斤P元，买W斤，则需支付W*P元。
  2. 香蕉：半价，每斤P元，买W斤，则需支付W/2*P元。
  3.桔子：按斤论价，每斤P元，买W斤。如果W>10，则打半价，即需支付W*P/2元；
  否则如果W>5，则打八折，即需支付W*P*0.8元；
  其他情况不打折，即需支付W*P元。
  请用C++来计算某个顾客采购的水果的总价。该程序至少应有：
  1. Fruit类：是个抽象类，是Apple、Banana和Orange的父类。支持重载的加法运算。
  2. Apple、Banana和Orange类：分别对应于苹果、香蕉和桔子三种水果，每种水果执行不同的定价策略。
  输入
  输入为多行，每行格式为：
  C W P
  其中C是水果类型（a、b、o分别代表苹果、香蕉和桔子），W和P分别是顾客购买的相应水果的重量和每斤水果的单价。
  输入完成后输入字符q结束输入。
  输出
  输出顾客需支付的总金额。
 */
#include <iostream>
using namespace std;
class Fruit
{
protected:
	double W, P;

public:
	Fruit(int w, int p) : W(w), P(p) {}
	virtual double price() = 0;
	friend double operator+(double, Fruit &);
};
double operator+(double s, Fruit &f)
{
	return s + f.price();
}
class Apple : public Fruit
{
public:
	Apple(int w, int p) : Fruit(w, p) {}
	double price()
	{
		return W * P;
	}
};
class Banana : public Fruit
{
public:
	Banana(int w, int p) : Fruit(w, p) {}
	double price()
	{
		return W * P * 0.5;
	}
};
class Orange : public Fruit
{
public:
	Orange(int w, int p) : Fruit(w, p) {}
	double price()
	{
		if (W > 10)
		{
			return W * P * 0.5;
		}
		else if (W > 5)
		{
			return W * P * 0.8;
		}
		else
			return W * P;
	}
};
int main()
{
	Fruit *fp = NULL;
	char c;
	double sum = 0;
	while ((cin >> c) && c != 'q')
	{
		switch (c)
		{
		case 'a':
		{
			int w, p;
			cin >> w >> p;
			fp = new Apple(w, p);
			sum += fp->price();
			break;
		}
		case 'b':
		{
			int w, p;
			cin >> w >> p;
			fp = new Banana(w, p);
			sum += fp->price();
			break;
		}
		case 'o':
		{
			int w, p;
			cin >> w >> p;
			fp = new Orange(w, p);
			sum += fp->price();
			break;
		}
		}
	}
	cout << sum;
}
