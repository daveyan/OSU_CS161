#include <iostream>
using namespace std;
//function prototype
double fallDistance(double );

int main()
{
	int fallTime;
	double distanceFallen;

	cout << "How long has the object been falling?:";
	cin >> fallTime;

	//call function fallDistance
	distanceFallen = fallDistance(fallTime);

	cout << "The oject has fallen " << distanceFallen << endl;
  

return 0;
}

 
