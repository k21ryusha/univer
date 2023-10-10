#include <iostream>
#include <math.h>
using namespace std;
int main() {
float x1;
cout << "x1_2 = ";
cin >> x1;
x1 = abs(x1);
if (x1 == 0) {
cout << "y1 = " << -1<<endl;
}
else if (x1 < 1) {
cout << "y1 = " << -(1 - abs(x1))<<endl;
}
else if (x1 == 1) {
cout << "y1 = " << 0<<endl;
}
else if (x1 < 2) {
cout << "y1 = " << -(abs(x1) - 1)<<endl;
}
else {
cout << "y1 = " << -1<<endl;
}
// С использованием логических операций
if ((x1 <= -2) or (x1 == 0) or (x1 >= 2)) {
cout << "y2 = " << -1<<endl;
}
if (x1 == -1 or x1 == 1) {
cout << "y2 = " << 0<<endl;
}
if ((x1 > -1 and x1 < 0) or (x1 > 0 and x1 < 1)) {
cout << "y2 = " << -(1 - abs(x1))<<endl;
}
if ((x1 > -2 and x1 < -1) or (x1 > 1 and x1 < 2)) {
cout << "y2 = " << -(abs(x1) - 1)<<endl;
}
return 0;
}

