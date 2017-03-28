#include <iostream>
using namespace std;

bool check_denom(int);

int main()
{
	int num, denom;
	cout << "enter a num";
	cin >> num;
	cout << "enter a denom";
	cin >> denom;

	if (check_denom(denom))
		cout << "division " << num/denom << endl;
	else	
		cout << "denom no good" << endl;

	return 0;
}

bool check_denom (int d)
{
	if (d==0)
		return false;	
	else
		return true;
}


