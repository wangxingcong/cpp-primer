#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Your first name, please: ";
    char name[20];
    std::cin >> name;
    std::cout << "Here is your name, verticality and ASCISized:\n";
    int index;
    while (name[index] != '\0')
    {
        std::cout << name[index] << " : " << int(name[index]) << '\n';
        index++;
    }
    
    return 0;
}
