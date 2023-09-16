/*create a class temperature with the member function getdata()
 and display() with req data to change F to C*/
#include<iostream>
using namespace std;
class temperature{
	public:
	float getdata(float f)
	{
		cin>> f;
		return f;
	}
	float display(float f,float c)
	{
		c=(f-32)/1.8;
		cout<< c;
	}
};
int main()
{
	float f,c=0;
	temperature temp;
	temp.getdata(0);
	temp.display(temp.f,temp.c);
	return 0;
}
