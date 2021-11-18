#include <iostream>

unsigned int CInStr(const char *str, char ch);

int main(int argc, char const *argv[])
{
    char mmm[15] = "minimum";
    char *wail = "ululate";
    unsigned int ms = CInStr(mmm, 'm');
    unsigned int ns = CInStr(wail, 'u');
    std::cout << ms << " m characters in " << mmm << std::endl;
    std::cout << ns << " n charaters in " << wail << std::endl;
    return 0;
}

unsigned int CInStr(const char *str, char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (ch == *str)
            count++;
        str++;
    }
    return count;
}