#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;

  for (size_t i = 1; i < 6; i++) {
    numbers.emplace_back(i);
  }

  std::cout << "Front: " << numbers.front() << std::endl;
  std::cout << "Back: " << numbers.back() << std::endl;

  numbers.emplace(numbers.begin() + 1, 10);
  std::cout << "Front: " << numbers.front() << std::endl;

  int searchValue = 10;
  auto it = std::find(numbers.begin(), numbers.end(), searchValue);
  if (it != numbers.end()) {
    std::cout << "value " << searchValue
              << " found at index: " << it - numbers.begin() << std::endl;
  } else {
    std::cout << "Value " << searchValue << " not found in list" << std::endl;
  }
}