#include <iomanip>
#include <iostream>

template <typename T>
bool equal(T a, T b) {
  std::cout << "template function :" << std::endl;
  std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
  return a == b;
}

bool equal(double a, double b) {
  std::cout << "double function" << std::endl;
  std::cout << "a: " << std::setprecision(7) << a << std::endl
            << "b: " << std::setprecision(7) << b << std::endl;
  std::cout << "difference: " << std::setprecision(7) << std::abs((a - b))
            << std::endl;
  return std::abs((a - b)) < 0.00001;
}

int main() {
  std::cout << equal(2, 2) << std::endl;
  std::cout << equal(2, 3) << std::endl;
  std::cout << equal(2.00001, 2.00002) << std::endl;
  std::cout << equal(2.000001, 2.000002) << std::endl;
  return 0;
}