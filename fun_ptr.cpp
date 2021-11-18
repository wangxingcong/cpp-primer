#include <iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double (*pt)(int));

int main(int argc, char const *argv[])
{
    int code;
    std::cin >> code;
    estimate(code, pam);
    estimate(code, betsy);
    return 0;
}

double betsy(int line)
{
    return 0.05 * line;
}

double pam(int line)
{
    return 0.3 * line;
}

void estimate(int line, double (*pt)(int))
{
    std::cout << pt(line) << " cost \n";
}
