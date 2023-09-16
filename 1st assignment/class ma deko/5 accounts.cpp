#include<iostream>
using namespace std;
class Account{
	public:
	long int accNo;
	float balance;
	static float min_balance;
	
};
int main(){
	int i;
	Account acc[5];
	for(int j;j<5;j++){
	
	cout<<"Enter data of account "<<j+1;
	cout<<"\nAccount number :";
	cin>>acc[j].accNo;
	cout<<"Balance :";
	cin>>acc[j].balance;
	}
	for(int j=0;j<5;j++)
	{
		cout<<"Account "<<j+1<<":";
		cout<<"\nAccount number : "<<acc[j].accNo;
		cout<<"\nBalance : "<<acc[j].balance<<endl;
	}
	return 0;
}
