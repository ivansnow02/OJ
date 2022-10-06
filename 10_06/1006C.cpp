/**
 * @file 1006C.cpp
 * @author ivan
 * @brief 求n以内被3除余1且个位数为6的所有整数（如16、46、...、286等）并显示在屏幕上。
 * @version 0.1
 * @date 2022-10-06
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 1 && i % 10 == 6)
            cout << i << ' ';
    }
}