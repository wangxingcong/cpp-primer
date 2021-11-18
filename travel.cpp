#include <iostream>

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

const travel_time sum(const travel_time t1, const travel_time t2);
void show_time(const travel_time t);

int main(int argc, char const *argv[])
{
    travel_time tmp;
    tmp.mins = 49;
    tmp.hours = 50;
    show_time(tmp);
    travel_time t1 = {4, 50};
    travel_time t2 = {5, 45};
    show_time(sum(t1, t2));
    return 0;
}

const travel_time sum(travel_time t1, travel_time t2)
{
    int mins = (t1.mins + t2.mins) % Mins_per_hr;
    int hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
    return (travel_time){hours, mins};
}

void show_time(travel_time time)
{
    std::cout << "Hours = " << time.hours << " Mins = " << time.mins << " !\n";
}
