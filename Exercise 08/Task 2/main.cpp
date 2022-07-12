#include <iostream>

template <typename Type1, typename Type2>
class Pair {
 public:
  Pair(Type1 a, Type2 b) : a(a), b(b) {}

  Type1 first() { return a; }

  Type2 second() { return b; }

  Pair operator+(const Pair &other) {
    Pair pair = *this;
    pair.a += other.a;
    pair.b += other.b;
    return pair;
  }

  bool operator>(Pair &other) {
    Pair pair = *this;
    return (pair.first() + pair.second()) > (other.first() + other.second());
  }

  /*
   * Forutsetninger:
   * En operator for å legge sammen to par
     her så forutsetter jeg at += finnes, da jeg kun har implementert +
     operatoren
   * En operator for å finne ut om et par er større enn et annet par.
   * Her skal du sammenligne summen av elementene i hvert enkelt par, se
     eksemplet nedenfor Her så har jeg implementert både < og >, men for full
     funksjonalitet så hadde jeg trengt >= og <=, så forutsetter derfor at de
     finnes
   */
 private:
  Type1 a;
  Type2 b;
};

int main() {
  Pair<double, int> p1(3.5, 14);
  Pair<double, int> p2(2.1, 7);
  std::cout << "p1: " << p1.first() << ", " << p1.second() << std::endl;
  std::cout << "p2: " << p2.first() << ", " << p2.second() << std::endl;

  if (p1 > p2)
    std::cout << "p1 er størst" << std::endl;
  else
    std::cout << "p2 er størst" << std::endl;

  auto sum = p1 + p2;
  std::cout << "Sum: " << sum.first() << ", " << sum.second() << std::endl;
}