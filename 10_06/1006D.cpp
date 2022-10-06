/**
 * @file 1006D.cpp
 * @author ivan
 * @brief 编写一程序统计参赛选手的得分，计分标准为去掉一个最高分和一个最低分后，对剩余得分求平均值。
 *        要求首先从键盘输入评委的个数num，然后输入num个分数（分数为小于等于10的一个正实数），输出最终得分。
 * @version 0.1
 * @date 2022-10-06
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<double> score(num);
    for (int i = 0; i < num; i++)
        cin >> score[i];
    sort(score.begin(), score.end());
    double sum = 0;
    for (int i = 1; i < num - 1; i++)
    {
        sum += score[i];
    }
    cout << sum / (num - 2);
    return 0;
}