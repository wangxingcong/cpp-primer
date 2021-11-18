#include <iostream>

void simple(); // function prototype
void print_cheers(int n);

int main(int argc, char const *argv[])
{
    std::cout <<  "main() will call the simple() function:\n";
    simple();
    std::cout << "main() is finished with the simple() function.\n";
    return 0;
}

void print_cheers(int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << "Cheers!";
    }
    
}

void simple(){
    std::cout << "I'm but a simple function.\n";
}