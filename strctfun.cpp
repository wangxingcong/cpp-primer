#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(rect *re, polar *p);
void show_polar(polar *p);
void show_polar_po(polar *pp);

int main(int argc, char const *argv[])
{
    rect rplace;
    polar pplace;
    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y) // 此时 cin 判断的标准输入的字符类型是否可以被转化为待接收的数据类型
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        show_polar_po(&pplace);
        std::cout << "Next two numbers (q to quid): ";
    }
    std::cout << "Done.\n";
    return 0;
}

void rect_to_polar(rect *rplace, polar *pp)
{
    pp->distance = sqrt(rplace->x * rplace->x + rplace->y * rplace->y);
    pp->angle = atan2(rplace->y, rplace->y);
}

void show_polar(polar *pplace)
{
    std::cout << "distance = " << pplace->distance << " , angle = " << pplace->angle * 57 << " degrees\n";
}

void show_polar_po(polar *pp)
{
    std::cout << "cout_by_point >>> distance = " << pp->distance << " , angle = " << pp->angle * 57 << " degrees\n";
}