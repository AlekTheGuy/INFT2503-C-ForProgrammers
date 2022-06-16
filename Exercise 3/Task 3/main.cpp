#include <iostream>
#include <string>

#include "commodity.hpp"

int main() {
  const double quantity = 2.5;
  Commodity commodity("Norvegia", 123, 73.50);

  std::cout << "Varenavn: " << commodity.get_name()
            << ", varenr: " << commodity.get_id()
            << " Pris pr enhet: " << commodity.get_price() << std::endl;

  std::cout << "Kilopris: " << commodity.get_price() << std::endl;
  std::cout << "Prisen for " << quantity << " kg er "
            << commodity.get_price(quantity) << " uten moms" << std::endl;
  std::cout << "Prisen for " << quantity << " kg er "
            << commodity.get_price_with_sales_tax(quantity) << " med moms"
            << std::endl;

  commodity.set_price(79.60);
  std::cout << "Ny kilopris: " << commodity.get_price() << std::endl;
  std::cout << "Prisen for " << quantity << " kg er "
            << commodity.get_price(quantity) << " uten moms" << std::endl;
  std::cout << "Prisen for " << quantity << " kg er "
            << commodity.get_price_with_sales_tax(quantity) << " med moms"
            << std::endl;
}