/*Qno1:Create a person class with attributes id and name and member function to set the member
variables and to display those variables. Then create class student with member variables grade
and address which inherits person class publicly.*/
#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		int id;
		string name;
};
class Student : public Person{
	string grade;
	string add;
	public:
		Student(int i,string n,string g,string a){
			id=i;
			name=n;
			grade=g;
			add=a;
		}
		void display(){
			cout<<"ID is : "<<id<<endl;
			cout<<"Name is : "<<name<<endl;
			cout<<"Grade is : "<<grade<<endl;
			cout<<"Address is : "<<add<<endl;
		}
};
int main(){
	Student s1(23081024,"Mosugu Shinudarou","2nd Semester","Lalitpur,Bagdole");
	s1.display();
	return 0;
}


