#include<iostream>
	using namespace std;

	int main()
	{
		
		int value;
		bool found = true;	// Init flag
		while(found)		// Test if nonNegative is true
		{
			cin >> value;
			if(value < 0)
				found = false;
			
		}
		//cout << "Sum of input numbers is " << sum << endl;
		return 0;
	}
