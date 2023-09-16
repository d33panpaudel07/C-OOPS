/*Qno6:Write a program to overload the unary minus operator using friend function.*/
#include<iostream>
using namespace std;

class Number{
	private:
		float number;
	public:
		
		Number(float n = 0):number(n){}
		
		friend Number operator -(Number &n);
		
		void display(){
			cout<<"Number:"<<number<<endl;
		}
};


Number operator -(Number &n){
	n.number = -n.number;
	return Number(n.number);
}

int main(){
	Number num1(10),num2;
	cout<<"Beore operation: num1 and num2 are:"<<endl;
	num1.display();
	num2.display();
	num2 = -num1;
	cout<<"After operation: num1 and num2 are:"<<endl;
	num1.display();
	num2.display();
	return 0;
}
