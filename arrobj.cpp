#include <iostream>
#include <string>
#include <array>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *expense);
void show(std::array<double, Seasons> expense);

int main(int argc, char const *argv[])
{
    std::array<double, Seasons> expense;
    fill(&expense);
    show(expense);
    return 0;
}

void fill(std::array<double, Seasons> *expense)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expeses: ";
        std::cin >> (*expense)[i];
    }
}

void show(std::array<double, Seasons> expense)
{
    std::cout << "EXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << " : $" << expense[i] << std::endl;
    }
}