/**
 * 题目描述
  运用多态编写程序，声明抽象基类Shape，由它派生出3个派生类： Circle(圆形)、Rectangle(矩形)、Triangle(三角形)，
  用一个函数printArea（）分别输出以上三者的面积（结果保留两位小数），3个图形的数据在定义对象时给定。
  输入
  圆的半径 矩形的边长 三角形的底与高
  输出
  圆的面积
  矩形的面积
  三角形的面积
  注意：每一行后有回车符
 */
#include <iostream>
using namespace std;
class Shape
{
protected:
	double Area;

public:
	virtual void printArea() = 0;
	virtual ~Shape() {}
};
class Circle : public Shape
{
private:
	double r;

public:
	Circle(double R)
	{
		r = R;
		Area = 3.1415927 * r * r;
	}
	void printArea()
	{
		printf("area of circle=%.2lf\n", Area);
	}
};
class Rectangle : public Shape
{
private:
	double a, b;

public:
	Rectangle(double A, double B)
	{
		a = A;
		b = B;
		Area = A * B;
	}
	void printArea()
	{
		printf("area of rectangle=%.2lf\n", Area);
	}
};
class Triangle : public Shape
{
private:
	double h, g;

public:
	Triangle(double H, double G)
	{
		h = H;
		g = G;
		Area = 0.5 * h * g;
	}
	void printArea()
	{
		printf("area of triangle=%.2lf\n", Area);
	}
};
int main()
{
	Shape *sp = NULL;
	double r, a, b, h, g;
	cin >> r >> a >> b >> h >> g;
	sp = new Circle(r);
	sp->printArea();
	sp = new Rectangle(a, b);
	sp->printArea();
	sp = new Triangle(h, g);
	sp->printArea();
	delete sp;
}
