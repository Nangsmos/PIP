#include<iostream>
using namespace std;
int main()
{
	bool arr1[]= {true,true, false, true, false};
	bool arr2[10]= {true, false, false, false, false, true, true};
	for(int i=0; i <sizeof(arr1)/sizeof(*arr1); i++){
		cout<<arr1[i]<<" "; 
	}
	cout<<endl;
	for(int i=0; i <sizeof(arr2)/sizeof(*arr2);i++){
		cout<<arr2[i]<<" ";
	}
}