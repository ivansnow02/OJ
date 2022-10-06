/**
 * @file 1006A.cpp
 * @author ivan
 * @brief 1、利用循环结构，编制程序显示出如下“图形”。
 * 1
 * 131
 * 13531
 * 1357531
 * 135797531
 * @version 0.1
 * @date 2022-10-06
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j;
        }
        for (int j = 2 * i - 3; j >= 1; j -= 2)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}