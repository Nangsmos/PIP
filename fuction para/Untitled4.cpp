#include<iostream>
using namespace std;

int plusFuctionInt(int x, int y){
	return x +y;
}
double plusFuctionDouble(double x, double y){
	return x+y;
}
int main(){
	int myNum1=plusFuctionInt(8,5);
	double myNum2=plusFuctionDouble(4.3,6.26);
	cout<<"Int   =  "<<myNum1<<"\n";
	cout<<"Double=  "<<myNum2;
	return 0;
}