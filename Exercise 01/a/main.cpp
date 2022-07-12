#include <iostream>

int main() {
  const int length = 5;
  double tmp1;
  double tmp2;
  double tmp3;
  double tmp4;
  double tmp5;

  int amountUnder10 = 0;
  int amountBetween10And20 = 0;
  int amountAbove20 = 0;

  std::cout << "Skriv inn 5 temperaturer:" << std::endl;

  std::cout << "Temperatur nr 1 :";
  std::cin >> tmp1;
  std::cout << "Temperatur nr 2 :";
  std::cin >> tmp2;
  std::cout << "Temperatur nr 3 :";
  std::cin >> tmp3;
  std::cout << "Temperatur nr 4 :";
  std::cin >> tmp4;
  std::cout << "Temperatur nr 5 :";
  std::cin >> tmp5;

  if (tmp1 >= 10 && tmp1 <= 20) {
    amountBetween10And20++;
  } else if (tmp1 < 10) {
    amountUnder10++;
  } else {
    amountAbove20++;
  }

  if (tmp2 >= 10 && tmp2 <= 20) {
    amountBetween10And20++;
  } else if (tmp2 < 10) {
    amountUnder10++;
  } else {
    amountAbove20++;
  }

  if (tmp3 >= 10 && tmp3 <= 20) {
    amountBetween10And20++;
  } else if (tmp3 < 10) {
    amountUnder10++;
  } else {
    amountAbove20++;
  }

  if (tmp4 >= 10 && tmp4 <= 20) {
    amountBetween10And20++;
  } else if (tmp4 < 10) {
    amountUnder10++;
  } else {
    amountAbove20++;
  }

  if (tmp5 >= 10 && tmp5 <= 20) {
    amountBetween10And20++;
  } else if (tmp5 < 10) {
    amountUnder10++;
  } else {
    amountAbove20++;
  }

  std::cout << "Antall under 10 er " << amountUnder10 << std::endl
            << "Antall mellom 10 og 20 er " << amountBetween10And20 << std::endl
            << "Antall over 20 er " << amountAbove20 << std::endl;
}