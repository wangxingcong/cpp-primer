// 一直获取用户的输入 然后回显 直到遇到特殊字符。 并且结束的时候能统计有效字符个数

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter characters; enter # to quit:\n";
    char ch;
    int count;
    do
    {
        std::cin >> ch;
        std::cout << ch;
        count++;
    } while (ch != '#');
    std::cout <<  '\n' << count << " characters read\n";
    return 0;
}
