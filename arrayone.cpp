// small arrays of integer

#include <iostream>

int main(int argc, char const *argv[]) {
  int yams[3];
  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;

  int yamcosts[3] = {20, 30, 5};
  std::cout << "Total yams = "
            << yams[0] + yams[1] + yams[2]
            << '\n';
  std::cout << "The package with "
            << yams[1] << " yams costs "
            << yamcosts[1] << " cents per yam."
            << '\n';
  std::cout << "The total yam expense is "
            << yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2]
            << " cents."
            << '\n';
  std::cout << "Size of yams array = " << sizeof yams << "bytes." << '\n';
  std::cout << "Size of one element = " << sizeof yams[0] << "bytes." << '\n';

  std::cout << "Size of double " << sizeof(double) << '\n';
  std::cout << "Size of long double " << sizeof(long double) << '\n';
  std::cout << "Size of long long " << sizeof(long long) << '\n';
  return 0;
}
