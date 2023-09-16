/*Lab2qno5::Create a class named feet with required data members and member function to add two
lengths given by user in feet and inches.*/
#include<iostream>
using namespace std;
class Feet{
	public:
	int feet,inch;
	public:
		void getdata();
		void processAndDisplay(int,int,int,int);
};
void Feet::getdata(){
	cout<<"Enter feet: ";
	cin>>feet;
	cout<<"Enter inch: ";
	cin>>inch;
}
void Feet::processAndDisplay(int f1,int i1,int f2,int i2){
	feet=f1+f2;
	inch=i1+i2;
	
	//height correction part
	while(inch>12){
		inch-=12;
		feet++;
	}
	cout<<"New height is :"<<feet<<"'"<<inch;
}
int main(){
	Feet f1,f2,f3;
	f1.getdata();
	f2.getdata();
	f3.processAndDisplay(f1.feet,f1.inch,f2.feet,f2.inch);
	return 0;
}
