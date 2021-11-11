//  char   + 1  cout.put()

#include <iostream>
const int Month = 12;

int main(int argc, char const *argv[]) {
  char ch = 'M';
  int c = ch;
  std::cout << "The ASCII code for " << ch << " is " << c  << '\n';
  ch = ch + 1;
  c = ch;
  std::cout << "The ASCII code for " << ch << " is " << c  << '\n';
  std::cout << "Displaying char ch using cout.put(ch):";
  std::cout.put(ch);
  std::cout.put('!');
  std::cout << '\n' << "Done" << '\n';
  char alarm = '\a';
  std::cout << alarm << '\n';
  return 0;
}
