/*Qno3:Create a class Polygon. Based on this class, derive two classes Rectangle and Triangle to
calculate area with necessary data members and member function.*/
#include<iostream>
using namespace std;

class Polygon{
	protected:
		float length,width,base,height;
};

class Rectangle:public Polygon{
	float AreaR;
	public:
		void areaOfRect(){
			AreaR=length*width;
		}
		void dispAreaOfRect(){
			cout<<endl<<AreaR<<" is the area of rectangle.";
		}
		void getRectData();
};
void Rectangle::getRectData(){
			cout<<"Enter Length : ";
			cin>>length;
			cout<<"Enter Width : ";
			cin>>width;
		}

class Triangle:public Polygon{
	float AreaT;
	public:
		void areaOfTri(){
			AreaT=(height*base)/2;
		}
		void dispAreaOfTri(){
			cout<<endl<<AreaT<<" is the area of Triangle.";
		}
		void getTriData(){
			cout<<endl<<endl<<"Enter Base : ";
			cin>>base;
			cout<<"Enter Height : ";
			cin>>height;
		}
};
int main(){
	Rectangle r1;
	Triangle t1;
	r1.getRectData();
	r1.areaOfRect();
	r1.dispAreaOfRect();
	t1.getTriData();
	t1.areaOfTri();
	t1.dispAreaOfTri();
	
	return 0;
}
