#include <iostream>

int main(int argc, char const *argv[])
{
    int age = 36;
    const int *pt = &age; // 声明指出 pt 指向一个 const int 不能通过该指针来修改值
    age = 12;
    // *pt += 1;  但是 age 不是一个const 可以直接通过 age 变量来修改值 但是不能用 pt 指针来修改它
    return 0;
}
