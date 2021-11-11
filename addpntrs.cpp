#include <iostream>

int main(int argc, char const *argv[]) {
  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};

  double* pw = wages; // c++将数组名解释为内存地址； 数组首位的内存地址
  short* ps = &stacks[0];

  //指针变量 + 1 代表加上指针类型的字节数
  std::cout << "pw = " << pw << ", *pw = " << *pw << '\n';
  std::cout << "add 1 to the pw pointer" << '\n';
  pw = pw + 1;
  std::cout << "pw = " << pw << "; *pw = " << *pw << '\n';

  std::cout << "ps = " << ps << ", *ps = " << *ps << '\n';
  std::cout << "add 1 to the ps pointer" << '\n';
  ps = ps + 1;
  std::cout << "ps = " << ps << "; *ps = " << *ps << '\n';

  std::cout << "access two elements with array notation" << '\n';
  std::cout << "stacks[0] = " << stacks[0] << " stacks[1] = " << stacks[1] << '\n';
  std::cout << "*stacks = " << *stacks << "*(stacks + 1) = " << *(stacks + 1) << '\n';

  std::cout << sizeof(wages) << " = size of wages array" << '\n';
  std::cout << sizeof(pw) << " = size of pw pointer" << '\n';
  return 0;
}
