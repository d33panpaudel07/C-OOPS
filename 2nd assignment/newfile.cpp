/*Lab2qno3::Write a function using reference variable as argument to swap the value of a pair of integers.*/
#include<iostream>
using namespace std;
class swapClass{
	
	int element1,element2;
	public:
	void readData();
	void swapper(int& a,int& b);
	void swappedData();
};
void swapClass::readData(){
	cout<<"Enter value of 1 element : ";
	cin>>element1;
	cout<<"Enter value of 2 element : ";
	cin>>element2;
}
void swapClass::swapper(int& a,int& b){
	int temp=a;
	element1=b;
	element2=temp;
}
void swapClass::swappedData(){
	swapper(element1,element2);
	cout<<"New value of 1 element is : "<<element1<<endl;
	cout<<"New value of 2 element is : "<<element2<<endl;
}
int main(){
	swapClass c1;
	c1.readData();
	c1.swappedData();
	return 0;
}




