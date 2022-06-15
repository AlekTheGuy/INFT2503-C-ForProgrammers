#include <iostream>

int find_sum(const int *table, int length);

int main() {
  int table[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                   11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  std::cout << "1-10: " << find_sum(&table[0], 10) << std::endl;
  std::cout << "11-15: " << find_sum(&table[10], 5) << std::endl;
  std::cout << "16-20: " << find_sum(&table[15], 5) << std::endl;
}

int find_sum(const int *table, int length) {
  int sum = 0;
  for (size_t i = 0; i < length; i++) {
    sum += *table;
    table++;
  }
  return sum;
}
