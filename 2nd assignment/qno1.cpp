/*Lab2qno1::Write a program to read two numbers from the user and display the largest value on the screen.(
create class Largest with required data-members and member-functions to read from user and to
display result.*/
#include<iostream>
using namespace std;
class Largest{
	int x;
	int y;
	public:
	void readNumbers();
	void largerNumber();
};
	void Largest::readNumbers(){
		cout<<"Enter value of x :";
		cin>>x;
		cout<<"Enter value of y :";
		cin>>y;
	}
	void Largest::largerNumber()
	{
	
		if(x>y)
		{
			cout<<x<<" is largest"<<endl;
		}
		else if(x<y)
		{
			cout<<y<<" is largest"<<endl;
		}
		else{
			cout<<"Both are equal"<<endl;
		}
	}
int main(){
	Largest obj1;
	obj1.readNumbers();
	obj1.largerNumber();
	
	return 0;
}
