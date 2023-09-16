/*Qno5:Create class Account that have data member customer_name, account_number, account_type.
From this class derive the classes Saving_account and current_account make it more specific to
need, include necessary member function to perform the following task.
a) Accept the deposit from the user and update account
b) Display the balance
c) Update the account after every withdraw*/
#include<iostream>
#include<string>
using namespace std;

class Account{
	protected:
		string customer_name;
		long account_number;
		string account_type;
		float balance;
};
class Saving_account : protected Account{
	public:
		void getDeposit(){
			float userInput;
			cout<<"Enter the amount you want to deposit : ";
			cin>>userInput;
			balance+=userInput;
			cout<<"Your deposit has been received, Your new balance is "<<balance<<endl;
		}
		void displayBalance(){
			cout<<"Your current balance is : "<<balance<<endl;
		}
};
class Current_account : protected Account{
	public:
		void getDeposit(){
			float userInput;
			cout<<"Enter the amount you want to deposit : ";
			cin>>userInput;
			balance+=userInput;
			cout<<"Your deposit has been received, Your new balance is "<<balance<<endl;
		}
		void displayBalance(){
			cout<<"Your current balance is : "<<balance<<endl;
		}	
};

int main(){
	label1:
	int userInput;
	cout<<"Select the type of Account : "<<endl;
	cout<<"1.Saving\t\t2.Current"<<endl;
	cin>>userInput;
	if(userInput==1)
	{
		Saving_account s1;
		int userInput1;
		cout<<"Welcome to your savings account : "<<endl<<"Select your purpose : "<<endl<<"1.Deposit\t\t2.Withdraw : "<<endl;
		cin>>userInput1;
		if(userInput1==1)
		{
			s1.getDeposit();
		}
	}
	else if(userInput==2)
	{
		Current_account c1;
		int userInput2;
		cout<<"Welcome to your current account : "<<endl<<"Select your purpose : "<<endl<<"1.Deposit\t\t2.Withdraw : "<<endl;
		cin>>userInput2;	
		if(userInput2==1)
		{
			c1.getDeposit();
		}
	}
	else{
		cout<<"Invalid input, please select again."<<endl;
		goto label1;
	};
	label2:
	char userChoice;
	cout<<endl<<"Would you like to use more options : ";
	cin>>userChoice;
	if(userChoice=='y'||'Y')
	{
		goto label1;	
	}	
	else if(userChoice=='n'||'N')
	{
		cout<<"Thankyou for using our service.";
	}
	else{
		cout<<"Invalid input, please select again : ";
		goto label2;
	}
	return 0;
}
