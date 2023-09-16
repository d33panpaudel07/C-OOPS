/*16. An electricity board charges the following rates to domestic users to discourage large
consumption of energy:
For the first 100 units -- 40paisa per unit
For next 200 units – 50 paisa per unit
Beyond 300 units -- 60paisa per unit
If the total cost is more than Rs 250 then an additional surcharge of 15% is added. All
users are charged a minimum of Rs 500. Write a program to read the names of users
and number of units consumed and print out the charges with names.*/
#include<iostream>
using namespace std;
int main(){
	int userNum,i;
	cout<<"Enter number of users : ";
	cin>>userNum;
	while(i<userNum){
		float sum=0,userIn=0,surCharge=0;
		char name[10];
		cout<<"Enter name of person "<<i+1<<":";
		cin>>name;
		cout<<"Enter total units of electricity bill : ";
		cin>>userIn;
		if(userIn<=100)
		{
			sum=userIn*0.4;
		}
		else if(userIn<=300)
		{
			sum=0.40*100;
			sum+=(userIn-100)*0.50;
		}
		else if(userIn>300){
			sum=100*0.40;
			sum+=(300-100)*0.50;
			sum+=(userIn-300)*0.60;
		}
		if(sum>250)
		{
			surCharge=sum*(15/100);
			sum+=surCharge;
		}
		if(sum<500)
		{
			sum=500;
		}
		cout<<"The total bill of "<<name<<", was : "<<sum<<endl;
		i++;
	}
	return 0;
}
