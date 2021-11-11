#include <iostream>

int main(int argc, char const *argv[]) {
  int nights = 1001;
  int* pt = new int;
  *pt = 1001;

  std::cout << "nights value = " << nights << ": location = " << &nights << '\n';
  std::cout << "int value = " << *pt << ": location = " << pt << '\n';
  double* pd = new double;
  *pd = 10000001.0;

  std::cout << "double value = " << *pd << ": location = " << pd << '\n';
  std::cout << "location of pointer pd " << &pd << '\n';
  std::cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << '\n';
  std::cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << '\n';

  int so[2] = {1,2};
  std::cout << &so << '\n';
  return 0;
}
