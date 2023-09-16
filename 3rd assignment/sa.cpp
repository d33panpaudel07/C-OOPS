#include<iostream>
using namespace std;
class base{
public:

virtual void hi(){
cout<<"Hello\n";
}
};


class derived: public base{
public:
void hi(){
cout<<"I am under the water.";
}
};


int main(){
base* ptr;
derived h;
ptr=&h;
ptr->hi();

return 0;
}

