#include <iostream>
#include <cstring>

int main(int argc, char const *argv[]) {
  char animal[20] = "bear";
  const char* bird = "wren";
  char* ps;

  std::cout << animal << " and " << bird << '\n';
  std::cout << "Enter a kind of animal : ";
  std::cin >> animal;
  ps = animal;
  std::cout << ps << '\n';

  std::cout << "Before using strcpy():" << '\n';
  std::cout << animal << " at " << (int*) animal << '\n'; // 对于cout 来说 char* 会输出字符不会打印地址。 所以要强转为 int*
  std::cout << ps << " at " << (int*) ps << '\n';

  ps = new char[strlen(animal) + 1];
  strcpy(ps ,animal);
  std::cout << "After using strcpy():" << '\n';
  std::cout << animal << " at " << (int*) animal << '\n';
  std::cout << ps << " at " << (int*) ps << '\n';

  delete[] ps;
  return 0;
}
