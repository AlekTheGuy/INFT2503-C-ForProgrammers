#pragma once

#include <iostream>
#include <string>

const double salesTax = 1.25;

class Commodity {
 public:
  Commodity(std::string name_, int id_, double price_);
  std::string get_name() const;
  int get_id() const;
  double get_price(int amount_) const;
  double get_price() const;
  void set_price(double price_);
  double get_price_with_sales_tax(int amount_) const;
  double get_price_with_sales_tax() const;

 private:
  std::string name;
  int id;
  double price;
};

Commodity::Commodity(std::string name_, int id_, double price_)
    : name(name_), id(id_), price(price_){};

std::string Commodity::get_name() const { return name; }

int Commodity::get_id() const { return id; }

double Commodity::get_price(int amount_) const { return price * amount_; }

double Commodity::get_price() const { return price; }

void Commodity::set_price(double price_) { price = price_; }

double Commodity::get_price_with_sales_tax(int amount_) const {
  return price * salesTax * amount_;
}

double Commodity::get_price_with_sales_tax() const { return price * salesTax; }