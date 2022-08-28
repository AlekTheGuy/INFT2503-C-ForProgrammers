#include <fstream>
#include <iostream>

void read_temperatures(double temperatures[], int length);

int main() {
  int amountUnder10 = 0;
  int amountBetween10And20 = 0;
  int amountAbove20 = 0;
  const int length = 5;
  double temperatures[length];
  read_temperatures(temperatures, length);

  for (double temperature : temperatures) {
    if (temperature >= 10 && temperature <= 20) {
      amountBetween10And20++;
    } else if (temperature < 10) {
      amountUnder10++;
    } else {
      amountAbove20++;
    }
  }

  for (size_t i = 0; i < length; i++) {
    std::cout << "Temperatur nr " << i + 1 << ": " << temperatures[i]
              << std::endl;
  }

  std::cout << "Antall under 10 er " << amountUnder10 << std::endl
            << "Antall mellom 10 og 20 er " << amountBetween10And20 << std::endl
            << "Antall over 20 er " << amountAbove20 << std::endl;
}

void read_temperatures(double temperatures[], int length) {
  const char filename[] = "../tallfil.dat";
  std::ifstream file;
  file.open(filename);
  if (!file) {
    std::cout << "Feil ved åpning av innfil." << std::endl;
    exit(EXIT_FAILURE);
  }

  int number;
  for (int i = 0; i < length; i++) {
    file >> number;
    temperatures[i] = number;
  }
  file.close();
}