/**
 * 题目描述
  自定义一个复数类型Complex，其中含有若干成员函数，使用该类可以完成复数的加法以及对复数的输出。请完成类定义，并编制主函数，说明Complex类对象，对定义的各成员函数进行调用。
  class Complex {
  double real; //复数实部
  double imag; //复数虚部
  public:
  Complex (); //无参构造函数，将复数对象的实部和虚部均置为0
  Complex (double r, double i); //有参构造函数，设置对象的实部和虚部
  Complex AddCom(Complex c2); //调用者对象与对象c2相加，返回Complex类对象
  void OutCom () ; //输出调用者对象的有关数据（各分量）
  };
  具体 要求如下：
  1、实现有参构造函数 Complex (double r, double i);
  2、实现 Complex AddCom(Complex c2); 调用者对象与对象c2相加，返回Complex类对象
  3、实现void OutCom () ;实现输出调用者对象的有关数据分量（一定要输出虚部的符号i），如果该数为纯虚数时,不需要输出实部，当虚部为0时，不需要输出虚部。
  4．编制主函数main，作用有参函数说明类对象cx,cy，使用 Complex 调用AddCom实现复数加法，并将相加的结果调用 OutCom方法以复数的形式输出。
  输入
  输入包括a,b,c,d四个整数，第一个复数为a+bi，第二个复数为c+di
 */

#include <bits/stdc++.h>
using namespace std;
class Complex {
		double real; //复数实部
		double imag; //复数虚部
	public:
		Complex (); //无参构造函数，将复数对象的实部和虚部均置为0
		Complex (double r, double i); //有参构造函数，设置对象的实部和虚部
		Complex AddCom(Complex c2); //调用者对象与对象c2相加，返回Complex类对象
		void OutCom () ; //输出调用者对象的有关数据（各分量）
};
Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}
Complex Complex::AddCom(Complex c2) {
	this->imag += c2.imag;
	this->real += c2.real;
	return *this;
}
void Complex::OutCom(){
	if(real==0) cout<<imag<<'i';
	else if(imag==0) cout<<real;
	else cout<<real<<'+'<<imag<<'i';
}
int main() {
	double r1,i1,r2,i2;
	cin>>r1>>i1>>r2>>i2;
	Complex cx(r1,i1),cy(r2,i2);
	cx.AddCom(cy);
	cx.OutCom();

}
