#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1;
    cout << "x1 = ";
    cin >> x1;
    int y;
    if (x1<-1){
        y = 1;
    }
    if (x1>=-1 && x1<0){
        y = 0;
    }
    if (x1>=0 && x1<1){
        y = -1;
    }
    if (x1>=1){
        y = 0;
    }
    cout << y;
    
     return 0;
}