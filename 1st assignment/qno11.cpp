/*10. WAP to demonstrate function overloading with conditions
a. Parameters should have a different type
b. different number of parameters
c. Parameters should have a different sequence of parameters*/
#include<iostream>
using namespace std;
void something(int x,int y){
	cout<<"Sum is = "<<x+y;
}
void something(char x,int y){
	cout<<"\nCharacter is "<<x<<"\t Number is "<<y;
}
void something(float x,int y,int z){
	cout<<"\nNumber in float is ="<<x<<"\t,Numbers in integer ="<<y<<" and "<<z;
}
int main(){
	int a=5,b=7,c=10;
	char r='R';
	something(a,b);
	something(r,b);
	float f=7.7;
	something(f,b,c);
	return 0;
}

