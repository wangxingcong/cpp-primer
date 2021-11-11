#include <iostream>
#include <climits>

#define ZERO 0

int main(int argc, char const *argv[]) {
  int _8 = 01;
  int _16 = 0xF;

  short sam = SHRT_MAX;
  unsigned short sue = sam;
  std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << '\n';
  std::cout << "$1 to each account." << '\n';
  sam = sam + 1;
  sue = sue + 1;
  std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << '\n';
  sam = ZERO;
  sue = ZERO;
  sam = sam - 1;
  sue = sue - 1;
  std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << '\n';
  return 0;
}
