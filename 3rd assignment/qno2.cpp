/*Qno2:Create a class named Time with required data members and member function to display the
time format in HH:MM:SS after adding two time period of object type given by user using
operator overloading concept.(User are allowed to enter any value)*/
#include<iostream>
using namespace std;
class Time{
	private:
	int hours,minutes,seconds;
	public:
	void getdata();
	Time operator+(const Time& dummy)const{
		Time result;
		result.seconds=seconds+dummy.seconds;
		result.minutes=minutes+dummy.minutes+result.seconds/60;
		result.hours=hours+dummy.hours+result.minutes/60;
		result.seconds%=60;
		result.minutes%=60;
		return result;
	}
	void displayTime(){
		cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
	}
};
void Time::getdata(){
	cout<<"Enter Hours : ";
	cin>>hours;
	cout<<"Enter Minutes : ";
	cin>>minutes;
	cout<<"Enter Seconds : ";
	cin>>seconds;
}
int main(){
	Time time1,time2;
	cout<<"Enter for time 1 : "<<endl;
	time1.getdata();
	cout<<"Enter for time 2 : "<<endl;
	time2.getdata();
	
	Time result = time1 + time2;
	
	cout<<"Time 1 : ";
	time1.displayTime();
	
	cout<<"Time 2 : ";
	time2.displayTime();
	
	cout<<"Their addition is : ";
	result.displayTime();
	
	return 0;
}

