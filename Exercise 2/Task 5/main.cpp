#include <iostream>

int main() {
  double number = 1;

  double *p;
  p = &number;

  double &r = number;

  std::cout << number << std::endl;
  number = 2;
  std::cout << number << std::endl;
  *p = 3;
  std::cout << number << std::endl;
  r = 4;
  std::cout << number << std::endl;
}
