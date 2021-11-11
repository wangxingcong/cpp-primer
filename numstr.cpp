#include <iostream>

int main(int argc, char const *argv[]) {
  int year;

  std::cout << "What year your house built ?" << '\n';
  std::cout << "year" << '\n';
  std::cin >> year;
  std::cin.get();
  char address[80];
  std::cin.getline(address, 80);
  std::cout << "What is its street address ?" << '\n';
  std::cout << "Year build :" << year << '\n';
  std::cout << "Address " << address << '\n';
  std::cout << "Done!" << '\n';
  return 0;
}
