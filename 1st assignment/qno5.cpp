/*WAP to demonstrate type casting conversion using assignment operator and static cast.*/
#include<iostream>
using namespace std;
int main(){
	float num2=2.66;
	int num1=static_cast<int>(num2);
	cout<<"new value of num1 is :"<<num1;
	
	return 0;
}

