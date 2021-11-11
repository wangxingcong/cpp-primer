#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[]) {
  using namespace std;
  string str;
  getline(std::cin, str);
  std::cout << str << '\n';
  std::cout << "str.length = " << str.size() << '\n';

  std::cout << "wchar sizeof = " << sizeof(wchar_t) << '\n';
  std::cout << "char16_t sizeof = " << sizeof(char16_t) << '\n';
  std::cout << "char32_t sizeof = " << sizeof(char32_t) << '\n';
  return 0;
}
