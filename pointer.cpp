#include <iostream>

int main(int argc, char const *argv[]) {
  int updates = 6;
  int * p_updates;
  p_updates = &updates;

  std::cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates << '\n';

  std::cout << "Addresss: &updates = " << &updates << ", p_updates = " << p_updates << '\n';

  // use pointer to change value
  *p_updates = *p_updates + 1;

  std::cout << "Now updates = " << updates << '\n';
  return 0;
}
