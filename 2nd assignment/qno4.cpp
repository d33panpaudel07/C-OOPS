/*Lab2qno4::Create a class named time with required data members and member functions to display the
time format in HH:MM:SS after adding two time period given by user.*/
#include<iostream>
using namespace std;
class Time{
    public:
	int hh,mm,ss;
	public:
		void getdata();
		void addition(int,int,int,int,int,int);
		void timeManagementProcess();
		void display();
};
void Time::getdata(){
	cout<<"Enter hours: ";
	cin>>hh;
	cout<<"Enter minutes: ";
	cin>>mm;
	cout<<"Enter seconds: ";
	cin>>ss;
}
void Time::addition(int h1,int m1,int s1,int h2,int m2,int s2){
	hh=h1+h2;
	mm=m1+m2;
	ss=s1+s2;
}
void Time::timeManagementProcess(){
	while(ss>=60)
	{
		mm++;
		ss-=60;
	}
	while(mm>=60)
	{
		hh++;
		mm-=60;
	}
}
void Time::display(){
	cout<<hh<<" : "<<mm<<" : "<<ss;
}
int main(){
	Time obj1,obj2,obj3;
	cout<<"data 1:"<<endl;
	obj1.getdata();
	cout<<"data 2:"<<endl;
	obj2.getdata();
	obj3.addition(obj1.hh,obj1.mm,obj1.ss,obj2.hh,obj2.mm,obj2.ss);
	obj3.timeManagementProcess();
	obj3.display();
	return 0;
}
