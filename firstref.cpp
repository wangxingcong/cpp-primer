#include <iostream>

// 引用就是别名的概念
// 引用常被用于函数参数，这种传递参数的方式称之为引用传递。
// C都是按值传递，当然可以绕过这种限制 通过按照指针的方式

int main(int argc, char const *argv[])
{
    int rats = 101;
    int &rodents = rats;
    std::cout << "rats = " << rats << ", rodents = " << rodents << " \n";
    rodents++;
    std::cout << "rats = " << rats << ", rodents = " << rodents << " \n";
    std::cout << "rats address = " << &rats << ", rodents address = " << &rodents << " \n";
    return 0;
}
