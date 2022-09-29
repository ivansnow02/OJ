#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;
    cin >> x;
    cout << sin(x) << "\n"<<tan(x)<<"\n"<<log10(x)<<"\n"<<log(x)<<"\n"<<pow(x,2)<<"\n"<<sqrt(x)<<"\n"<<pow(x,10)<<"\n"<<pow(x,1/double(10))<<"\n"<<(1/double(x))<<endl<<exp(x)<<endl<<fabs(pow(x,5)+log10(pow(x,2)+1)-pow(2,x)-13);
	return 0;
}
