#include <iostream>
#include <string>

const int StringSize = 5;

void display(std::string strs[], int size);

int main(int argc, char const *argv[])
{
    std::cout << "Enter you " << StringSize << " favorite movie star \n";
    std::string strs[StringSize];
    int cur = 0;
    std::string str;
    while (cur < 5)
    {
        std::cout << cur << " : ";
        std::getline(std::cin, str);
        strs[cur] = str;
        cur++;
    }
    std::cout << "List : \n";
    display(strs, StringSize);
    return 0;
}

void display(std::string strs[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << " : " << strs[i] << std::endl;
    }
}