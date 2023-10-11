#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float y1,y2,y3;
    float x;
    cout << "x = ";
    cin >> x;
    //часть 1
    if (x==0){
        cout << "y1 = undefined \n";}
    else if (x<-2){
        y1 = 1;
        cout << "y1 = " << y1<< "\n";
    }
    else  if (x<=-1){
            y1 = 0;
            cout << "y1 = " << y1<< "\n";
    }
    else if (x<0){
            y1 = x+1;
            cout << "y1 = " << y1<< "\n";
        }
    else if (x<=1){
            y1 = x-1;
            cout << "y1 = " << y1<< "\n";
        }
    else  if (x<=2){
        y1 = 0;
        cout << "y1 = " << y1<< "\n";
        }
    else if (x>=-2){
        y1 = 0;
        cout << "y1 = " << y1<< "\n";
        }
    else if (x>-1){
        y1 = x+1;
        cout << "y1 = " << y1<< "\n";
    }
    else if (x>0){
        y1 = x-1;
        cout << "y1 = " << y1<< "\n";
    }
    else if (x>1){
       y1 = 0;
        cout << "y1 = " << y1<< "\n"; 
    }
    else {
        y1 = -1;
        cout << "y1 = " << y1<<"\n";
    }
    // часть 2
    if (x<-2){
        y2 = 1;
        cout << "y2 = " << y2<< "\n";
    }
    if ((x>=-2 && x<=-1)||(x>=1 && x<=2)){
        y2 = 0;
        cout << "y2 = " << y2<< "\n";
    }
    if (x>-1 && x<0){
        y2 = x+1;
        cout << "y2 = " << y2<< "\n";
    }
    if (x>0 && x<1){
        y2 = x-1;
        cout << "y2 = " << y2<< "\n";
    }
    if (x>2){
        y2 = -1;
        cout << "y2 = " << y2<< "\n";
    }
    if (x==0){
        cout << "y2 = undefined \n";
    }

    // часть 3
    if (x==0){
        cout << "y3 = undefined \n";
    }
    else{
       y3 = (x<-2) ? 0 : ((x>=-2 && x<=-1)||(x>=1 && x<=2)) ? 0 : (x>-1 && x<0) ? (x+1) : (x>0 && x<1) ? (x-1) : -1;
       cout << "y3 = " << y3<< "\n";

    }
}