#include <iostream>

int main(int argc, char const *argv[]) {
  int higgens = 5;
  int* pt = &higgens;

  std::cout << "Value of higgens = " << higgens << "; Address if higgens = " << &higgens << '\n';
  std::cout << "Value of *pt = " << *pt << "; Value of pt = " <<  pt << '\n';
  return 0;
}
