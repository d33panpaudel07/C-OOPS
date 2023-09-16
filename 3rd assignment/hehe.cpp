#include<iostream>
using namespace std;

class Haha {
public:
    char p, q;

    void getData() {
        do {
            cout << "Enter p : ";
            cin >> p;
            cout << "Enter q : ";
            cin >> q;
        } while (!((p == 't' || p == 'f' || p == 'T' || p == 'F') &&
                   (q == 't' || q == 'f' || q == 'T' || q == 'F')));
    }

    void showResult() {
        if ((p == 't' || p == 'T') && (q == 't' || q == 'T')) {
            cout << "Result of P^`Q is : F";
        } else if ((p == 't' || p == 'T') && (q == 'f' || q == 'F')) {
            cout << "Result of P^`Q is : T";
        } else if ((p == 'f' || p == 'F') && (q == 't' || q == 'T')) {
            cout << "Result of P^`Q is : F";
        } else {
            cout << "Result of P^`Q is : F";
        }
    }t
};

int main() {
    Haha h1;
    h1.getData();
    h1.showResult();
    return 0;
}

