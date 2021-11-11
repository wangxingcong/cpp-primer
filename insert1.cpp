#include <iostream>

int main(int argc, char const *argv[]) {
  const int Size = 20;
  char name[Size];
  char dessert[Size];

  std::cout << "Enter your name:" << '\n';
  std::cin.getline(name, 20);
  std::cout << "Enter your favorite dessert" << '\n';
  std::cin.getline(dessert, 20);

  std::cout << "I have some delicious " << dessert << ", for you, " << name  << '\n';
  return 0;
}
