#include <iostream>

int main(int argc, char const *argv[]) {
  int* fellow;
  int adr = 5;
  fellow = &adr;
  *fellow = 23333;

  //fellow_point address not initial
  // so don't have address stored value for *fellow
  // your must initial fellow when you set the address for fellow
  std::cout << "fellow address = " << fellow << '\n';
  std::cout << "fellow value = " << *fellow << '\n';

  int* pn = new int;
  return 0;
}
