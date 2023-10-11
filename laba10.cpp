#include <cmath>
#include <iostream>
int main() {
  // Метод простых итераций
  double x1, x0, Eps, dx;
  int n1 = 1000;
  int n = 1000;
  std::cout << "Метод простых итераций" << std::endl;
  std::cout << "x0 = ";
  std::cin >> x0;
  std::cout << "Eps = ";
  std::cin >> Eps;
  double p = 3 * pow(x0, 2);
  if (p < 1) {
    do {
      x1 = pow((x0), 3);
      dx = abs(x1 - x0);
      x0 = x1;
      n--;
    } while ((dx > Eps) and (n > 0));
    if (n > 0) {
      std::cout << "x0 = " << x0 << " n = " << (1000 - n) << std::endl;
      std::cout << "\n";
    } else {
      std::cout << "Превышен лимит шагов" << std::endl;
    }
  } else if (p > 1) {
    do {
      x1 = cbrt(x0);
      dx = abs(x0 - x1);
      x0 = x1;
      n--;
    } while ((dx > Eps) and (n > 0));
    if (n > 0) {
      std::cout << "x0 = " << x0 << std::endl
                << "n = " << (1000 - n) << std::endl;
      std::cout << "\n";
    } else {
      std::cout << "Превышен лимит шагов" << std::endl;
    }
  } else {
    std::cout << "Решить уравнение данным способом невозможно";
  }
  // Метод касательных
  std::cout << "Метод касательных" << std::endl;
  if (((pow(x0, 3) - x0) * (6 * x0)) > 0) {
    do {
      x1 = x0 - ((pow(x0, 3) - x0) / 3 * (pow(x0, 2) - 1));
      dx = abs(x0 - x1);
      x0 = x1;
      n--;
    } while ((abs(dx) > Eps) and (n1 > 0));
    if (n1 > 0) {
      std::cout << "x0 = " << x0 << std::endl
                << "n = " << (1000 - n1) << std::endl;
    } else {
      std::cout << "Превышен лимит шагов" << std::endl;
    }
  } else {
    std::cout << "Решить уравнение данным способом невозможно";
  }
  return 0;
}