#include <iostream>
using namespace std;

class swapClass {
	public:
    int element1, element2;

public:
    void readData();
    void swapper(int& a, int& b);
    void displayer();
};

void swapClass::readData() {
    cout << "Enter value of 1 element: ";
    cin >> element1;
    cout << "Enter value of 2 element: ";
    cin >> element2;
}

void swapClass::swapper(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapClass::displayer() {
    cout << "New value of 1 element is: " << element1 << endl;
    cout << "New value of 2 element is: " << element2 << endl;
}

int main() {
    swapClass c1;
    c1.readData();

    cout << "Before swapping:" << endl;
    cout << "1 element = " << c1.element1 << ", 2 element = " << c1.element2 << endl;

    c1.swapper(c1.element1, c1.element2);

    cout << "After swapping:" << endl;
    c1.displayer();

    return 0;
}

