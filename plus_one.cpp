#include <iostream>

int main(int argc, char const *argv[]) {
  int a = 20;
  int b = 20;
  std::cout << "a = " << a << ", b = " << b << '\n';
  std::cout << "a++ = " << a++ << ": ++b = " << ++b << '\n';
  std::cout << "a = " << a << ", b = " << b << '\n';
  return 0;
}
