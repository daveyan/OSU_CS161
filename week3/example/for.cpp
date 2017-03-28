#include <iostream>
using namespace std;

int main()
{
	const int TIMES = 5;
	int x;

	for(x=1; x<=TIMES; x++)
		cout << "hey there" << endl; 

	cout << "value of x: " << x << endl;
	return 0;
}
