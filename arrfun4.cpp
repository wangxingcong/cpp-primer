#include <iostream>

int sum_arr(int *begin_point, int *end_point);
const int ArrSize = 8;

int main(int argc, char const *argv[])
{
    int arr[ArrSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << "Total Count = " << sum_arr(arr, arr + 8) << " !\n";
    std::cout << "Total Count = " << sum_arr(arr, arr + 8) << " !\n";
    std::cout << "Total Count = " << sum_arr(arr + 3, arr + 5) << " !\n";
    return 0;
}

int sum_arr(int *begin_point, int *end_point)
{
    int sum = 0;
    for (; begin_point != end_point; begin_point++)
    {
        sum += *begin_point;
    }
    return sum;
}