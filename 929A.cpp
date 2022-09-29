#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double dlt = pow(b, 2) - 4 * a * c;
    double x1, x2;
    x1 = (-b + sqrt(dlt)) / (2 * a);
    x2 = (-b - sqrt(dlt)) / (2 * a);
    cout<<x1<<" "<<x2<<endl;
    return 0;
}