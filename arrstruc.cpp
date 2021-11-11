#include <iostream>
#include <string>

struct student{
  std::string name;
  int score;
  double price;
};

int main(int argc, char const *argv[]) {
  student foo[2] = {
    {"小强", 12, 0.8},
    {"小明", 29, 0.2}
  };

  std::cout << "The Student "
            << foo[0].name
            << " and "
            << foo[1].name
            << '\n'
            << " have a combined volume of "
            << foo[0].price + foo[1].price
            << " cubic feet" << '\n';

  return 0;
}
