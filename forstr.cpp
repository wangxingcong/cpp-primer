#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::cout << "Enter a word: ";
  std::string temp;
  std::cin >> temp;
  for (int i = temp.size() - 1; i >= 0; i--) {
    std::cout << temp[i];
  }
  std::cout << "\nBye" << '\n';
  return 0;
}
