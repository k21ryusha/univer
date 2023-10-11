#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1;
    cout << "x1 = ";
    cin >> x1;
    int y1;
    int y2;
    if (x1 < -1){
        y1 = 1;
        cout << "y1 = ";
        cout << y1<<"\n";
    }
    else 
    if (x1 < 0){
        y1 = 0;
        cout << "y1 = ";
        cout << y1<<"\n";
    }
    else  
    if (x1<1){
        y1 = -1;
        cout << "y1 = ";
        cout << y1<<"\n";
    }
    else 
    if (x1 >= -1){
        y1 = 0;
        cout << "y1 = ";
        cout << y1 <<"\n";
    } 
    else
    if (x1 >=0){
        y1 = -1;
        cout << "y1 = ";
        cout << y1<<"\n";
    }

    else {
        y1=0;
        cout << "y1 = ";
        cout << y1<<"\n";
    }

    if (x1<-1){
        y2 = 1;
        cout << "y2 = ";
        cout << y2<<"\n";
    }
    if (x1>=-1 && x1<0){
        y2 = 0;
        cout << "y2 = ";
        cout << y2<<"\n";
    }
    if (x1>=0 && x1<1){
        y2 = -1;
        cout << "y2 = ";
        cout << y2<<"\n";
    }
    if (x1>=1){
        y2 = 0;
        cout << "y2 = ";
        cout << y2<<"\n";
    }

    return 0;

}