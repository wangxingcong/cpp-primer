#include <iostream>

//void simon(int);

void simon(int n)
{
	using namespace std;
	cout << "simon( " << n << " )"  
			<< endl;
}

int main(void)
{
	using namespace std;
	cout << "begin" << endl;
	simon(3);
	int count;
	cin >> count;
	simon(count);
	cout << "ended";
	return 0;
}

