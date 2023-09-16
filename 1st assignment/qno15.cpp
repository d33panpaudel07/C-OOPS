/*15. Write a program to find the factorial of a n number using For Loop, WhileLoop*/
#include<iostream>
using namespace std;
int main(){
	int userIn;
	cout<<"Enter a number : ";
	cin>>userIn;
	int i,j,proFor=1,proWhile=1;
	i=userIn;
	j=userIn;
	//factorial using for loop
	for(i;i>1;i--)
	{
		proFor*=i;	
	}
	cout<<"Factorial using for loop is :"<<proFor;
	//factorial using while loop
	while(j>1)
	{
		proWhile*=j;
		j--;
	}
	cout<<"\nFactorial using while loop is :"<<proWhile;
	return 0;
}

