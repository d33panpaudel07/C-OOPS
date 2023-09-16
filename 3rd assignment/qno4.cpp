/*Qno4:Write a program to convert an object of class Dollar to an object of class Rupees. The attributes
of Dollar is dol and cent. The attributes of class Rupees is rs, and paisa. Conversion in source
class.*/
#include<iostream>
using namespace std;

class Dollar {
    private:
        int dollar, cent;

    public:
        Dollar(int d, int c): dollar(d), cent(c) {}

        void display() {
            cout << "Dollar value: " << dollar << endl;
            cout << "Cent value: " << cent << endl;
        }

        void converterRupeePaisa(float &rupee, float &paisa) {
            rupee = dollar * 132.68;
            paisa = cent * 1.3268;
        }
};

class Rupee {
    private:
        float rupee, paisa;

    public:
        Rupee() : rupee(0), paisa(0) {}

        Rupee(Dollar d) {
            d.converterRupeePaisa(rupee, paisa);
        }

        void display() {
            cout << "Rupee value: " << rupee << endl;
            cout << "Paisa value: " << paisa << endl;
        }
};

int main() {
    int x, y;
    cout << "Enter Dollars: ";
    cin >> x;
    cout << "Enter Cents: ";
    cin >> y;

    Dollar d1(x, y);
    Rupee r1 = d1;

    d1.display();
    r1.display();

    return 0;
}

