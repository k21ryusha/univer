#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float d;
    float a;
    float b;
    float c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";   
    cin >> b;
    cout << "c = ";
    cin >> c;
    d = (pow(b,2) - 4*a*c);
    float x1 = (((-b)+sqrt(d))/2*a);
    float x2 = (((-b)-sqrt(d))/2*a);
    cout <<"x1 = "<< x1<<"\n";
    cout <<"x2 = " <<x2<<"\n";
    cout << a <<"*"<<"("<<x1<<")"<< "^2+" << b<<"*"<<"("<<x1<<")"<<"+"<<c<<"="<<(a*pow(x1,2)+b*x1+c)<<"\n";
    cout << a <<"*"<<"("<<x2<<")"<< "^2+" << b<<"*"<<"("<<x2<<")"<<"+"<<c<<"="<<(a*pow(x2,2)+b*x2+c)<<"\n";
    return 0;
}