/*WAP to demonstrate manipulators like setw, setprecision, setfill*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x=7,y=10;
	cout<<x<<setw(5)/*puts white spaces as specified*/<<y<<endl;
	cout<<x<<setfill('*')/*replaces all white spaces by given character*/<<setw(20)<<y;
	return 0;
}


