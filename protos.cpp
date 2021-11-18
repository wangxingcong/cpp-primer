#include <iostream>

void cheers(int n);
double cube(double x);

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    cheers(n);
    double x;
    std::cout << "Give me a number : ";
    std::cin >> x;
    std::cout << x;
    std::cout << "A " << x << "-foot cube has  a volume of " << cube(x) << " cubic feet. \n";
    std::cin >> x;
    cheers(cube(x));
    return 0;
}

void cheers(int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << "Cheers! ";
    }
    std::cout << '\n';
}

double cube(double x){
    return x * x * x;
}