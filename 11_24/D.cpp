/**
 * 题目描述
  要求定义一个基类Point，它有两个私有的float型数据成员X,Y;
  一个构造函数用于对数据成员初始化；
  有一个成员函数void Move(float xOff, float yOff)实现分别对X,Y值的改变，其中参数xOff和yOff分别代表偏移量。
  另外两个成员函数GetX() 、GetY()分别返回X和Y的值。
  Rectangle类是基类Point的公有派生类。它增加了两个float型的私有数据成员W,H;
  增加了两个成员函数float GetH() 、float GetW()分别返回W和H的值；
  并定义了自己的构造函数，实现对各个数据成员的初始化。
  编写主函数main()根据以下的输入输出提示，完成整个程序。
  输入
  6个float型的数据，分别代表矩形的横坐标X、纵坐标Y、宽度W，高度H、横向偏移量的值、纵向偏移量的值；每个数据之间用一个空格间隔
  输出
  输出数据共有4个，每个数据之间用一个空格间隔。分别代表偏移以后的矩形的横坐标X、纵坐标Y、宽度W，高度H的值
 */
#include <iostream>
using namespace std;
class Point {
	private:
		float X, Y;
	public:
		Point(float x, float y) {
			X = x;
			Y = y;
		}
		void Move(float xOff, float yOff) {
			X += xOff;
			Y += yOff;
		}
		float GetX() {
			return X;
		}
		float GetY() {
			return Y;
		}
};
class Rectangle : public Point {
	private:
		float W, H;
	public:
		Rectangle(int x, int y, int w, int h): Point(x, y) {
			W = w;
			H = h;
		}
		float GetW() {
			return W;
		}
		float GetH() {
			return H;
		}

};
int main() {
	int x,y,w,h,xo,yo;
	cin>>x>>y>>w>>h>>xo>>yo;
	Rectangle rect(x,y,w,h);
	rect.Move(xo,yo);
	cout<<rect.GetX()<<' '<<rect.GetY()<<' '<<rect.GetW()<<' '<<rect.GetH();
}
