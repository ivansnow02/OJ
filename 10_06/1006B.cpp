/**
 * @file 1006B.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-10-06
 * 某商店出售四种商品: A商品每公斤2.75元；B商品每个12.5 元；
 * C商品每米26.8 元；D商品每台512元，超过3台优惠10%，超过8台优惠15%。
 * 设计一个计算价格的程序，通过输入购买四种商品的数量，
 * 计算并显示每种商品应付金额以及总金额。
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    double A = 2.75, B = 12.5, C = 26.8, D = 512;
    int numa, numb, numc, numd;
    cin >> numa >> numb >> numc >> numd;
    A *= (double)numa;
    B *= (double)numb;
    C *= (double)numc;
    D *= (double)numd;
    if (numd > 8)
        D *= 0.85;
    else if (numd > 3)
        D *= 0.9;
    cout << "A:" << A << endl
         << "B:" << B << endl
         << "C:" << C << endl
         << "D:" << D << endl
         <<"total:"<<A+B+C+D;
    return 0;
}