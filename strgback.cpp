// 接受一个字符和数字 buildStr
#include <iostream>

char *BuildStr(char c, int n);

int main(int argc, char const *argv[])
{
    int times;
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    std::cout << "Enter an integer: ";
    std::cin >> times;
    char *ps = BuildStr(ch, times);
    std::cout << ps << std::endl;
    delete[] ps;
    ps = BuildStr('+', 20);
    std::cout << ps << "-DONE-" << ps << std::endl;
    delete[] ps;
    return 0;
}

char *BuildStr(char ch, int n)
{
    char *str = new char[n + 1];
    str[n] = '\0';
    while (n-- > 0)
    {
        str[n] = ch;
    }
    return str;
}