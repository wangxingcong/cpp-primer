#include <iostream>

const int Arrsize = 8;
int sum_arr(int arr[], int size); // C++ 将数组名解释为第一个元素的地址 
int sum_arr_point(int* arr, int size); // 在这个上下文里 这种表示法是等价的 但是对于其他的是不同的

int main(int argc, char const *argv[])
{
    int cookie[] = {1,2,3,4,5,6,7,8};
    int sum = sum_arr_point(cookie, Arrsize);
    std::cout << "Total cout = " << sum << '\n';
    return 0;
}

int sum_arr_point(int* arr, int size){
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); //每次+i 实质上是将指针后移
    }
    return sum;
}

int sum_arr(int arr[], int size){
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
