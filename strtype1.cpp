#include "iostream"
#include "string"

int main(int argc, char const *argv[]) {
  char char1[20];
  char char2[20] = "jaguar";

  using namespace std;
  string str1;
  string str2 = "panther";

  std::cout << "Enter a kind of feline: ";
  std::cin >> char1;
  std::cout << char1 << '\n';

  std::cout << "Enter another kind of feline: ";
  std::cin >> str1;
  std::cout << str1 << '\n';

  std::cout << char1 << " "<< char2 << " " << " " << str1 << " " << str2 << '\n';
  std::cout << "The third letter in " << char2 << " is " << char2[2] << '\n';
  std::cout << "The third letter in " << str2 << " is " << str2[2] << '\n';
  return 0;
}
