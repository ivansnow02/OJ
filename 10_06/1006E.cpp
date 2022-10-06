/**
 * @file 1006E.cpp
 * @author ivan
 * @brief 设计一个程序，对于用户输入的任意正整数a（a≥1）和b（b≥2），求出满足b^n≤a的最大整数n。
 * @version 0.1
 * @date 2022-10-06
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int n = 1;
    for (; pow(b, n) <= a; n++)
    {
        true;
    };

    cout << n - 1;
}