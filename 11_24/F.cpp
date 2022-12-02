/**
 * 题目描述
  自定义一个日期时间类DateTimeType，它含有类DateType与类TimeType的类对象作为其数据成员，并具有所列的其他几个成员函数。
  而后编制主函数，说明DateTimeType的类对象，并对其成员函数以及二对象成员所属类的公有成员函数进行使用。
  class DateTimeType {  //自定义的日期时间类 DateTimeType
  DateType date; //类 DateType 的类对象 date 作为其数据成员
  TimeType time; //类 TimeType 的类对象 time 作为其另一个数据成员
  public:
  DateTimeType(int y0=1, int m0=1, int d0=1, int hr0=0, int mi0=0, int se0=0);
  //构造函数，设定 DateTimeType 类对象的日期时间，并为各参数设置了默认值
  DateType& GetDate(){ return date; } //返回本类的私有数据对象 data
  TimeType& GetTime(){ return time; } //返回本类的私有数据对象 time
  void IncrementSecond(int s);  //增加若干秒，注意“进位”问题
  void PrintDateTime(); //屏幕输出日期时间对象的有关数据
  };
  注意，每一个DateTimeType类对象中总包含有一个DateType类对象（对象成员）以及一个TimeType类对象（对象成员），
  编制与实现本程序时，也必须包含DateType与TimeType自定义类（类型）。
  之所以设置了公有的类成员函数GetDate与GetTime，是为类外如主函数处使用该类的私有数据成员date与time提供方便
  （否则的话，类外无法直接访问该类的私有数据成员）。
  另外，两成员函数返回的都为引用，为的是可将返回对象当作一个独立变量来使用（如可以继续作左值等）。
  例如，假设编制了如下形式的主函数:
  void main() {
  DateTimeType dttm1(1999,12,31,23,59,59), dttm2;
  (dttm1.GetDate()).PrintDate(); //调用对象成员所属类的公有成员函数
  cout<<endl;
  dttm1.PrintDateTime(); //调用本派生类的成员函数 PrintDateTime
  dttm2.PrintDateTime();
  dttm1.IncrementSecond(30) ; //调用本派生类成员函数
  dttm1.PrintDateTime();
  }
 */
#include <iostream>
using namespace std;
class DateTimeType;
class DateType {
	protected:
		int year;
		int month;
		int day;
	public:
		DateType(int y, int m, int d) {
			year = y;
			month = m;
			day = d;
		}
		void PrintDate() {
			cout << year << '-' << month << '-' << day;
		}
		friend class DateTimeType;
};
class TimeType {
	protected:
		int hour;
		int min;
		int sec;
	public:
		TimeType(int h, int m, int s) {
			hour = h;
			min = m;
			sec = s;
		}
		void PrintTime() {
			cout << hour << ':' << min << ':' << sec;
		}
		friend class DateTimeType;

};
class DateTimeType {  //自定义的日期时间类 DateTimeType
		DateType date; //类 DateType 的类对象 date 作为其数据成员
		TimeType time; //类 TimeType 的类对象 time 作为其另一个数据成员
	public:
		DateTimeType(int y0 = 1, int m0 = 1, int d0 = 1, int hr0 = 0, int mi0 = 0, int se0 = 0): date(y0, m0, d0), time(hr0, mi0, se0) {}
		//构造函数，设定 DateTimeType 类对象的日期时间，并为各参数设置了默认值
		DateType& GetDate() {
			return date;    //返回本类的私有数据对象 data
		}
		TimeType& GetTime() {
			return time;    //返回本类的私有数据对象 time
		}
		void IncrementSecond(int s);  //增加若干秒，注意“进位”问题
		void PrintDateTime(); //屏幕输出日期时间对象的有关数据
};
void DateTimeType::PrintDateTime() {
	date.PrintDate();
	cout << ' ';
	time.PrintTime();
	cout << endl;
}
int months[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool isRun(int year) {
	if (((year % 4 == 0) && (year % 100)) || year % 400 == 0) {
		return true;
	}
	return false;
}
void DateTimeType::IncrementSecond(int s) {
	if (isRun(GetDate().year)) months[2] = 29;
	while (s--) {
		GetTime().sec++;
		if (GetTime().sec == 60) {
			GetTime().min++;
			GetTime().sec = 0;
		}
		if (GetTime().min == 60) {
			GetTime().hour++;
			GetTime().min = 0;
		}
		if (GetTime().hour == 24) {
			GetDate().day++;
			GetTime().hour = 0;
		}
		if (GetDate().day == months[GetDate().month] + 1) {
			GetDate().month++;
			GetDate().day = 1;
		}
		if (GetDate().month == 13) {
			GetDate().year++;
			GetDate().month = 1;
		}
		months[2] = 28;

	}
}
int main() {
	DateTimeType dttm1(1999, 12, 31, 23, 59, 59), dttm2;
	(dttm1.GetDate()).PrintDate(); //调用对象成员所属类的公有成员函数
	cout << endl;
	dttm1.PrintDateTime(); //调用本派生类的成员函数 PrintDateTime
	dttm2.PrintDateTime();
	dttm1.IncrementSecond(30) ; //调用本派生类成员函数
	dttm1.PrintDateTime();
}
