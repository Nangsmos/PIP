#include <iostream>
using namespace std;
const int employee = 12;
int main()
{
	int employee1;
	int enployee2;
	employee1 = 13;
	cout << "Line 9: employee1 =" << employee1
	<< endl;
	
	cout << "Line 10: Enter a NUmber: ";
	cin >> enployee2;   
	cout<< endl;
	
	cout <<"Line 13: enployee2 = " << enployee2
	<< endl;
	
	employee1= employee1 + employee + 5 * enployee2;
	
	cout << "Line 15: The new value of "
	<< " employee1 = " << employee1 << endl;
	return 0;
	
}
