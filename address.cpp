#include <iostream>

int main(int argc, char const *argv[]) {
  int  donuts = 6;
  double cups = 4.5;
  // &var 地址运算符
  std::cout << "donuts value = " << donuts
            << " and donuts address = " << &donuts << '\n';
  std::cout << "cups value = " << cups
            << " and cups address = " << &cups << '\n';

  return 0;
}
