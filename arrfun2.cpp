#include <iostream>

const int ArrSize = 8;
int sum_arr(int arr[], int size);

int main(int argc, char const *argv[])
{
    int cookies[ArrSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << "Total cout = " << sum_arr(cookies, ArrSize) << " !\n";
    std::cout << "Head Four elements count = " << sum_arr(cookies, 4) << " !\n";
    std::cout << "Last Elements count = " << sum_arr(cookies + 4, 4) << " !\n";
    return 0;
}

int sum_arr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
