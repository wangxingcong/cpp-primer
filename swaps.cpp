#include <iostream>
// 交互变量的值

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    swapv(a, b);
    swapp(&a, &b);
    swapr(a, b);
    return 0;
}

void swapr(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapv(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}