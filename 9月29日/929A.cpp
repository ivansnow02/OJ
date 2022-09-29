/**
 * 编程序，输入三个实数a、b、c(假设满足b2-4ac>0)，求出方程ax2+bx+c=0的两个实根并显示在屏幕上。
 * 标准库函数，使用前需要在程序开始处包含对应的头文件，如:#include<cmath>
 * sqrt(x):计算出数学中的x的平方根
 * pow(x,y):计算出数学中的x的y次方
 *
 */

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double dlt = pow(b, 2) - 4 * a * c;
	double x1, x2;
	x1 = (-b + sqrt(dlt)) / (2 * a);
	x2 = (-b - sqrt(dlt)) / (2 * a);
	cout << x1 << " " << x2 << endl;
	return 0;
}
