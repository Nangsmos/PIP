#include<iostream>
using namespace std;
int main()
{
	float arr1[]={'a','e','i','o','u'};
	float arr2[10]={'t','u','t','o','r','i','a','l'};
	for(int i=0; i <sizeof(arr1)/sizeof(*arr1); i++){
		cout<<arr1[i]<<" "; 
	}
	cout<<endl;
	for(int i=0; i <sizeof(arr2)/sizeof(*arr2);i++){
		cout<<arr2[i]<<" ";
	}
}