#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string world = "?ate";
    for (char ch = 'a'; world != "mate"; ch++)
    {
        std::cout << "world = " << world << " \n";
        world[0] = ch;
    }
    std::cout << "Finally world == " <<  world << " \n";
    return 0;
}
