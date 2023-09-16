/*Lab2qno3::Write a function using reference variable as argument to swap the value of a pair of integers.*/
#include<iostream>
using namespace std;
class swapClass{
	
	int element1,element2;
	public:
	void readData();
	void swapper(int& a,int& b);
	void displayer();
};
void swapClass::readData(){
	
}
void swapClass::swapper(int& a,int& b){
	element2=a;
	element1=b;
}
void swapClass::displayer(){
	cout<<"New value of 1 element is : "<<element1<<endl;
	cout<<"New value of 2 element is : "<<element2<<endl;
}
int main(){
	int element1,element2;
	
	cout<<"Enter value of 1 element : ";
	cin>>element1;
	cout<<"Enter value of 2 element : ";
	cin>>element2;
	
	swapClass c1;
	c1.swapper(element1,element2);
	c1.displayer();
	return 0;
}

