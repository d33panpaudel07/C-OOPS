/*12. Create a calculator using switch statement*/
#include<iostream>
using namespace std;
int main(){
	char operation;
	int a,b;
	cout<<"This is a calculator for basic mathematic operation.";
	cout<<"\nEnter any one from +,-,*,/ :" ;
	cin>>operation;
	cout<<"\nNow enter two numbers with space between them :";
	cin>>a>>b;
	switch(operation){
		case '+':
			cout<<a+b;break;
		case '-':
			cout<<a-b;break;
		case '*':
			cout<<a*b;break;
		case '/':
			cout<<a/b;break;
		default:
			cout<<"\ninvalid operation given";
	}return 0;
}

