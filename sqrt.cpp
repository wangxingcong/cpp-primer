#include <iostream>
#include <cmath>

int main(void)
{
	/* code */
	using namespace std;
	double area;
	cout << "Enter the flloor area, in square feet, of your home: ";
	cin >> area;
	double side = sqrt(area);
	cout << "That's the equivalent of a square " 
	<< side 
	<< " feet to the side"
	<< endl;
	cout << "How fascinating!" << endl;
	return 0;
}