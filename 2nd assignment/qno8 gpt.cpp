#include<iostream>
using namespace std;

class Account {
	float accNo, balance;
	static float min_balance;

public:
	void getdata();
	void display();
	static void display_min_balance();
};

float Account::min_balance = 500;

void Account::getdata() {
	cout << "Account Number: ";
	cin >> accNo;
	cout << "Balance: ";
	cin >> balance;
}

void Account::display() {
	cout << "Account Number: " << accNo << ", ";
	cout << "Balance: " << balance << endl;
}

void Account::display_min_balance() {
	cout << "Minimum balance is: " << min_balance << endl;
}

int main() {
	Account accs[5];
	int i = 0;
	while (i < 5) {
		cout << "Enter details of Account " << i + 1 << endl;
		accs[i].getdata();
		i++;
	}

	int j = 0;
	while (j < 5) {
		cout << "Account " << j + 1 << ":\n";
		accs[j].display();
		j++;
	}

	Account::display_min_balance();

	return 0;
}

