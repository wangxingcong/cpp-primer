#include <iostream>
#include <string>

struct inflatable {
  std::string name;
  float volume;
  double price;
};

int main(int argc, char const *argv[]) {
  inflatable guest = {"Glorious Gloria", 1.88, 29.99};
  inflatable pal = {"Audacious Arthur", 3.12, 32.99};

  std::cout << "Expand your guest list with " << guest.name << " and " <<  pal.name << "!" << '\n';
  std::cout << "You can have both for $" << guest.price + pal.price << "!" << '\n';
  std::cout << "Guest name first char is " << guest.name[0] << '\n';
  return 0;
}
