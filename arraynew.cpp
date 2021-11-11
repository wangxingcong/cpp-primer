#include <iostream>

int main(int argc, char const *argv[]) {
  double* p3 = new double[3]; //initial array

  p3[0] = 0.2;
  p3[1] = 0.5;
  p3[2] = 0.8;

  std::cout << "p3[1] is " << p3[1]  << '\n';
  p3 = p3 + 1;
  std::cout << "p3[0] is " << p3[0] << '\n';
  std::cout << "p3[1] is " << p3[1] << '\n';
  p3 = p3 - 1;
  delete [] p3;
  return 0;
}
