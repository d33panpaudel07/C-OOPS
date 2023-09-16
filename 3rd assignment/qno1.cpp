/*Qno1:Write a program to convert one object to another. For this program, there should be two classes
called Feet and Kilometer. Your program must be able to convert (ft, inch) to (km, m). The
attributes of Feet are ft and inch and attributes of Kilometer are km and m.(1km=328 ft).
conversion in destination class.*/
#include<iostream>
using namespace std;
class Feet{
	private:
		float ft,inch;
	public:
		Feet(){
			cout<<"Enter feet : ";
			cin>>ft;
			cout<<"Enter inch : ";
			cin>>inch;	
		}
		friend class Kilometer;
};
class Kilometer{
	private:
		float km,m;
	public:
		void converter(Feet &f1)
		{
			km=f1.ft/328;
			m=f1.inch/39.37;
		}
		void displayer(){
			cout<<"Feet to kilometers is : "<<km<<endl;
			cout<<"Inch to meters is : "<<m<<endl;
		}
};
int main(){
	Feet f1;
	Kilometer k1;
	k1.converter(f1);
	k1.displayer();
	return 0;
	
}
