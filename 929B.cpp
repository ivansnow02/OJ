/**
 * 编程序，从键盘输入double型的正实数x，
 * 而后计算sin(x)、tg(x)、lg(x)、ln(x)、x的平方、x的平方根、x的10次方、x的10次方根、x的倒数以及e的x次方之值，
 * 并将各结果显示在屏幕上。
 * 而后按如下公式计算出y并输出:y=︱x5+lg(x2+1)–2x–13︱
 *
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cin >> x;
    cout << sin(x) << "\n"
         << tan(x) << "\n"
         << log10(x) << "\n"
         << log(x) << "\n"
         << pow(x, 2) << "\n"
         << sqrt(x) << "\n"
         << pow(x, 10) << "\n"
         << pow(x, 1 / double(10)) << "\n"
         << (1 / double(x)) << endl
         << exp(x) << endl
         << fabs(pow(x, 5) + log10(pow(x, 2) + 1) - pow(2, x) - 13);
    return 0;
}
