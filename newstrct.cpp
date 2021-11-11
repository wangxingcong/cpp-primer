#include <iostream>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main(int argc, char const *argv[]) {
  inflatable* ps = new inflatable;

  std::cout << "Enter name of inflatable item: ";
  std::cin.get(ps->name, 20);
  std::cout << "Enter volume in cubic feet: ";
  std::cin >> (*ps).volume;
  std::cout << "Enter price: $";
  std::cin >> ps->price;
  std::cout << "Name: " << ps->name << '\n';
  std::cout << "Volume: " << (*ps).volume << '\n';
  std::cout << "Price: " << ps->price << '\n';
  delete ps;
  return 0;
}
