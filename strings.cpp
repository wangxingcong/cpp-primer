#include <iostream>
#include <cstring>

int main(int argc, char const *argv[]) {
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";

  int arr[12] = {1};
  std::cout << "arr sizeof " << sizeof(arr) << " bytes." << '\n';
  std::cout << "Size of char " << sizeof(char) << '\n';

  std::cout << "Howdy! I'm " << name2 << "! What's you name?" << '\n';
  std::cin >> name1;
  std::cout << "Well," << name1 << ", your name has " << strlen(name1)
            << " letters and is stored"
            << " in an array of "
            << sizeof(name1)
            << " bytes."
            << '\n';
  std::cout << "Your initial is " << name1[0] << '\n';
  name2[3] = '\0';
  std::cout << "Here are the first 3 characters of my name " << name2 << '\n';
  return 0;
}
