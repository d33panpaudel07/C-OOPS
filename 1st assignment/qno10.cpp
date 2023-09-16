/*Write a program that will ask for a temperature in Fahrenheit and display it in Celsius. (Hint C=
F-32/1.8)*/
#include<iostream>
using namespace std;
int main()
{
	float fahr,cel;
	cout<<"Enter temperature:";
	cin>>fahr;
	cel=(fahr-32)/1.8;
	cout<<cel;
	return 0;
}

