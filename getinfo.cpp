# include <iostream>

int main(void)
{
	using namespace std;
	int carrots;
	cout << "how many carrots do you have ?" << endl;
	cin >> carrots;
	cout << "here are you two more. ";
	carrots = carrots + 2;
	cout << carrots << " carrots." << endl;
	return 0;
}