/*Lab2qno7::Create a class named complex with required data member and member function to add two
complex equation( x+ya where x and y are two real number and a is imaginary number for
example input and output form should be like“2+3a”)
[Hint use default constructor to initialize value , parameterized constructor for input and create
function with object as arguments)*/
#include<iostream>
using namespace std;
class complexData{
	public:
	int real,img;
		complexData(){
			real=0;
			img=0;
		}
		complexData(int r,int i){
		real=r;
		img=i;
		}
};

//complexData::complexData(int x,int y){
//	
//}

int main(){
	int inpReal1,inpImg1,inpReal2,inpImg2,totalReal,totalImg;

	cout<<"Enter real part of first number:";
	cin>>inpReal1;
	cout<<"Enter imaginary part of first number:";
	cin>>inpImg1;
	complexData d1(inpReal1,inpImg1);
	
	cout<<"Enter real part of second number:";
	cin>>inpReal2;
	cout<<"Enter imaginary part of second number:";
	cin>>inpImg2;
	complexData d2(inpReal2,inpImg2);
	
	totalReal=d1.real+d2.real;
	totalImg=d1.img+d2.img;
	
	cout<<"Total complex number is "<<totalReal<<" "<<totalImg<<"i";
			
	return 0;
}
