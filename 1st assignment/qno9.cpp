/*Write a program to input integer value from keyboard and display on screen “Welcome to ACHS
College” that many times.(Hint: For loop)*/
#include<iostream>
using namespace std;
int main(){
	int userInput,i;
	cout<<"Enter a number :";
	cin>>userInput;
	for(i;i<=userInput;i++)
	{
		cout<<"Welcome to ACHS College.\n";
	}
	return 0;
}
