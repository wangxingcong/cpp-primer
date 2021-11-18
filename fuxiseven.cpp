#include <iostream>

void fill_arr(int arr[], int size, int num);        //3
void fill_arr_point(int *begin, int *end, int num); //4
double max_arr(double arr[], int size);             //5
// 6 因为基础类型的值传递的是copy值
// 7 char[] char* 常量字符串
int judge(int (*pf)(const char *)); // 11

int replace(char *str, char c1, char c2);

int main(int argc, char const *argv[])
{
    std::cout << "replace count = " << replace("abca", 'a', 'b') << std::endl;
    return 0;
}

int replace(char *str, char c1, char c2)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == c1)
        {
            *str == c2;
            count++;
        }
        str++;
    }
    return count;
}

double max_arr(double arr[], int size)
{
    double max = 0.0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void fill_arr_point(int *begin, int *end, int num)
{
    while (begin != end)
    {
        *begin = num;
        begin += 1;
    }
}

void fill_arr(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = num;
    }
}
