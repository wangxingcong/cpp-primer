#include <iostream>
//内联函数
inline double square(double x) { return x * x; }
inline void printVal(int va) { std::cout << va << std::endl; }