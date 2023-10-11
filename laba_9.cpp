#include <iostream>
#define M_PI 3.14159265358979323846
#include <cmath>
int main() {
  double x = 0;
  double s = 0.1;
  std::cout << "cos(x)       "
       << "f(x)         "
       << "f1(x)        "
       << "абсолютная ошибкa     "
       << "относительная ошибка"
       << "\n";
  do {
    double f = 1 - (pow(x, 2) / (1 * 2)) + (pow(x, 4) / (1 * 2 * 3 * 4)) -
               (pow(x, 6) / (1 * 2 * 3 * 4 * 5 * 6)) +
               (pow(x, 8) / (1 * 2 * 3 * 4 * 5 * 6 * 7 * 8));
    double f2 = (40320 - (20160 * x * x) - (1680 * x * x * x * x) -
                 (56 * x * x * x * x * x * x) + (x * x * x)) /
                40320;
    double absmis = f2 - f;
    double modabsmis = abs(absmis);
    double otnmis = (modabsmis/ f2) * 100;
    x += s;
    printf("%f     ", cos(x));
    printf("%f     ", f);
    printf("%f     ", f2);
    printf("%f              ", absmis);
    printf("%f\n",otnmis);

  } while (x < (M_PI / 4));
  x = 0;
  std::cout << "WELL DONE";

  return 0;
}