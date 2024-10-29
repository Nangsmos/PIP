#include<iostream>
using namespace std;
int main()
{
	int time ;
	cout<<"Please Enter time  =";cin>>time;
	if (time<10){
		cout<<"Good Morning";
	}else if (time<20){
		cout<<"Good day";
	}else {
		cout<<"Good Evening";
	}
	return 0;
}
