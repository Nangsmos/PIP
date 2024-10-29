#include<iostream>
using namespace std;
int main()
{
	float arr1[]={7.98652, 5.7443, 8.8888,4.1255557,2.222222};
	float arr2[10]={5.882, 5.578, 1,448, 92.232, 74965, 6669.888,884};
	for(int i=0; i <sizeof(arr1)/sizeof(*arr1); i++){
		cout<<arr1[i]<<" "; 
	}
	cout<<endl;
	for(int i=0; i <sizeof(arr2)/sizeof(*arr2);i++){
		cout<<arr2[i]<<" ";
	}
}