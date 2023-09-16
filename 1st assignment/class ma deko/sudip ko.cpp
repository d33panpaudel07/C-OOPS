#include <iostream>
using namespace std;

class Account {
    int acc_no;
    double balance;
    static double min_balance;

public:
    static void displayMinBalance() {
        cout << "Minimum Balance: " << min_balance << endl;
    }

    void readData() {
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void displayData() {
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

double Account::min_balance = 1000.0;

int main() {
    Account accounts[5];


    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Account " << i + 1 << endl;
        accounts[i].readData();
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Details for Account " << i + 1 << endl;
        accounts[i].displayData();
        cout << endl;
    }

  
    Account::displayMinBalance();

    return 0;
}
