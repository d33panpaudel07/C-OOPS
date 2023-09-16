/*Lab2qno6::WAP to find velocity (v=d/t) using friend class.*/
#include<iostream>
using namespace std;
class data{
	float d,t;
	friend class Result;
};

class Result{
	public:
	float velocity;
	void getdata(data &d1){
		cout<<"Time :";
		cin>>d1.t;
		cout<<"Distance :";
		cin>>d1.d;
	}
	
	float calculation(data d1)
	{
		float velocity;
		velocity=d1.d/d1.t;
		return velocity;
	}
};

int main(){
	data d1;
	Result r1;
	r1.getdata(d1);
	cout<<"The velocity is :"<<r1.calculation(d1);
	
	return 0;
}
