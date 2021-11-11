#include <iostream>
#include <climits>

int main(int argc, char const *argv[]) {
  /* code */
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;
  int num = {1};
  std::cout << n_int   << '\n';
  std::cout << sizeof n_int << '\n';
  std::cout << sizeof (long long) << '\n';
  return 0;
}
