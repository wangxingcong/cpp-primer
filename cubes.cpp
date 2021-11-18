#include <iostream>

double cube(double a);
double re_cube(double &ra); // 如果传递引用又不想
// 使用基本数值类型，应该采用按值传递的方式，当时数据比较大的时候，譬如结构和类 引用参数会很有用

int main(int argc, char const *argv[])
{
    std::cout << "Enter you number for cube : ";
    double num;
    std::cin >> num;
    std::cout << "cube for num = " << cube(num) << " ! \n";
    std::cout << "num = " << num << std::endl;
    std::cout << "re_cube for num = " << re_cube(num) << " !\n";
    std::cout << "num = " << num << std::endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double re_cube(double &a)
{
    a *= a * a;
    return a;
}
