#include <iostream>

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  std::cout << "Variabel: i verdi: " << i << " minne: " << &i << std::endl;
  std::cout << "Variabel: j verdi: " << j << " minne: " << &j << std::endl;
  std::cout << "Variabel: p verdi: " << p << " minne: " << &p << std::endl;
  std::cout << "Variabel: q verdi: " << q << " minne: " << &q << std::endl;
}
