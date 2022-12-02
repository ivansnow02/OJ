/**
 * 自定义一个简单日期类 DateType，它具有数据成员 y、m、d，用来表示当前日期的年、月、日。
  而后设计该类欲实现（完成）的功能，进而设计出相应的类成员函数。

  class DateType {
  //自定义的日期类 DateType
  int y,m,d; //数据成员，表示当前日期的年、月、日
  public:
  DateType(int y0=1, int m0=1, int d0=1);
  //构造函数，设定年、月、日；并设置参数默认值
  void IncrementDay(); //增加 1 天
  bool Equal(DateType dt2); //判断二日期是否相等
  void PrintDate(); //屏幕输出日期对象的有关数据（年、月、日）
  };

  1、完成有参构造函数
  2、完成  void IncrementDay()函数，计算天数加1后的日期。
  3、完成Equal(DateType dt2)函数，判断两个日期是否相等。
  4、完成打印输出函数PrintDate()，在屏幕上输出日期对象的有关数据（年、月、日）
  5、编写并完成主函数，实现输入包含六个整数，说明DateType类对象dt1,dt2,分别是dt1和dt2的年月日。请先输出dt1，dt2，然后判断dt1，dt2是否相等，再对dt1,dt2分别增加一天。最后输出dt1，dt2。
  注意：在IncrementDay成员函数中，当对日期增加1天后，要注意所谓的“进位”问题：首先算出本“日”所在的月份具有的天数N（注意闰年与平年的2月份天数不一样），若加1之后的“日”数值超过所在的月份具有的天数N时，“进位”到月，而月份若超过12时还要“进位”到年等。

  输入
  两个日期的月、日、年
 */

#include <bits/stdc++.h>
using namespace std;
int months[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isRun(int y)
{
	if ((y % 4 == 0) && (y % 100) || (y % 100 == 0) && (y % 400 == 0))
	{
		return true;
	}
	return false;
}
class DateType
{
	//自定义的日期类 DateType
	int y, m, d; //数据成员，表示当前日期的年、月、日
public:
	DateType(int y0 = 1, int m0 = 1, int d0 = 1)
	{
		y = y0;
		m = m0;
		d = d0;
	}
	//构造函数，设定年、月、日；并设置参数默认值
	void IncrementDay()
	{
		if (isRun(y))
			months[2] = 29;
		d++;
		if (d == months[m] + 1)
		{
			m++;
			d = 1;
		}
		if (m == 13)
		{
			y++;
			m = 1;
		}
		months[2] = 28;
	}

	//增加 1 天
	bool Equal(DateType dt2)
	{
		return (d == dt2.d) && (m == dt2.m) && (y == dt2.y);
	}

	//判断二日期是否相等
	void PrintDate()
	{
		cout << y << ':' << m << ':' << d << endl;
	}

	//屏幕输出日期对象的有关数据（年、月、日）
};

int main()
{
	int y1, m1, d1, y2, m2, d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	DateType dt1(y1, m1, d1), dt2(y2, m2, d2);
	dt1.PrintDate();
	dt2.PrintDate();
	cout << (dt1.Equal(dt2) ? "True" : "False") << endl;

	dt1.IncrementDay();
	dt2.IncrementDay();
	dt1.PrintDate();
	dt2.PrintDate();
}
