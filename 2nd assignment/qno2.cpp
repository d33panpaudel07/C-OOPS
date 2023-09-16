/*Lab2qno2::Create a class temperature with the member function getdata() and display() with required
data to changed the temperature given in farenheit to celsius.*/
#include<iostream>
using namespace std;
class Temperature{
	public:
	float farenheit,celsius;	float farenheit,celsius;
	public:
		void getdata();
		void display();
};

void Temperature::getdata(){
	cout<<"Enter temperature in farenheit: ";
	cin>>farenheit;
}
void Temperature::display(){
	celsius=(farenheit-32)/1.8;
	cout<<"The temperature in celsius is: "<<celsius;
}

int main(){
	Temperature temp1;
	temp1.getdata();
	temp1.display();
	return 0;
}
