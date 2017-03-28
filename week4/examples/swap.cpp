#include <iostream>
using namespace std;

void swap (int &x, int& y)
{
	int temp =x;

	cout << "x: " << x << " y: " << y << endl;
	x=y;
	y=temp;

	cout << "adres x: " << &x << endl;
	cout << "adres y: " << &y << endl;
	cout << "x: " << x << " y: " << y << endl;

	
}

int main()
{
	int a = 5, b = 10;

	swap(a,b);

	cout << "adres a: " << &a << endl;

	cout << "adres a: " << &b << endl;

	cout << "a: " << a << " b: " << b << endl;
  
	

return 0;
}

