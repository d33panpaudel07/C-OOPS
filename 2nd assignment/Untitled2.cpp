#include <iostream>
using namespace std;

class Feet {
public:
    int ft;
    int inch;
    Feet(int ft, int inch) : ft(ft), inch(inch) {}
};

class Kilometer {
public:
    int km;
    int m;
    Kilometer(int km, int m) : km(km), m(m) {}
    Kilometer(Feet f) {
        int totalInches = f.ft * 12 + f.inch;
        double totalMeters = totalInches / 39.37;
        km = totalMeters / 1000;
        m = (int)(totalMeters - km * 1000);
    }
};

int main() {
    Feet f(328, 0);
    Kilometer k = f;
    cout << k.km << " km " << k.m << " m" << endl;
    return 0;
}

