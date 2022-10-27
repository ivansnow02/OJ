/**
 * 小宗想知道两个日期之间所间隔的天数，他希望有一个日期计算器，输入两个日期后能够自动计算之间的天数。要求：设计相应的函数完成天数的计算，在主函数中验证正确性。
 */
#include <bits/stdc++.h>
using namespace std;
bool is_run(int year) {
	if (year % 4 == 0 && year % 100) {
		return true;
	} else if (year % 100 == 0 && year % 400 == 0) {
		return true;
	}
	return false;
}
int months[13] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int sub(int year1, int month1, int day1, int year2, int month2, int day2) {
	int ans = 0;
	for (int i = year1; i < year2; i++) {
		if (is_run(i)) ans += 366;
		else ans += 365;
	}
	if (is_run(year2))months[2] = 29;
	for (int i = 0; i < month2; i++) ans += months[i];
	ans += day2;
	months[2] = 28;
	if (is_run(year1))months[2] = 29;
	for (int i = 0; i < month1; i++) ans -= months[i];
	ans -= day1;
	return ans;
}
int main() {
	int y1, m1, d1, y2, m2, d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	cout << sub(y1, m1, d1, y2, m2, d2);
}
