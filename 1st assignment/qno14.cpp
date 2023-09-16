/*14. Write a program to find the largest among three numbers using the if-else statement:*/
#include<iostream>
using namespace std;
int main(){
	int a=5,b=7,c=2;
	if(a>b&&a>c)
	{
		cout<<"a is greatest.";
	}
	else if(b>a&&b>c)
	{
		cout<<"b is greatest.";
	}
	else{
		cout<<"c is greatest.";
	}
	return 0;
}
