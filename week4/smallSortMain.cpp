#include <iostream>
using namespace std;

void smallSort(double &num1, double &num2, double &num3);

int main()
{
	double numA, numB, numC;

	cout << "Please enter three numbers\n";

	cout << "int a: ";
	cin >> numA;
	cout << "int b: ";
	cin >> numB;
	cout << "int c: ";
	cin >> numC;
	
	smallSort(numA, numB, numC);
	
	cout << numA << ", " << numB <<  ", " << numC << endl;

return 0;
}
 
