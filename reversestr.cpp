#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << "Enter a word : " ;
    std::string world;
    std::cin >> world;
    char temp;
    for (int i = 0, j = world.size() - 1; i < j; i++, j--)
    {
        temp = world[i];
        world[i] = world[j];
        world[j] = temp;
    }
    std::cout << "reverse string  = " << world << "\nDone\n";
    return 0;
}
