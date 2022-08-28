#include <iostream>

int main() {
  int a = 5;
  int &b = a;  // Referanser må initieres
  int *c;
  c = &b;
  // a er en variabel og trenger ikke å derefereres.
  // b er en referanse og trenger da ikke derefereres for å hente verdien.
  a = b + *c;
  // &b er en minnelokasjon og kan ikke settes.
  b = 2;
}
