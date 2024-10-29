#include<iostream>
using namespace std;
int main()
{
	int test [3][4]=
	{
		{2, 5, 5,2 },
		{4, 0, 3,3 },
		{9, 1, 8,1 }};
		for (int i=0; i<3; i++)
		{
			for (int j=0; j<4; j++){
				cout<<test[i][j]<<" ";
			}
			cout<<endl;
		}
			
	
			
		return 0;	
	}

