/*Qno3:WAP to concatenate strings with operator overloading (+) operator.*/
#include<iostream>
#include<string.h>
using namespace std;
class Concatenator{
	private:
		char s1[25];
		char s2[25];
	public:
		Concatenator(char str1[],char str2[]){
			strcpy(this->s1,str1);
			strcpy(this->s2,str2);
		}
		void operator+()
		{
			cout<<endl<<"Joined word is : "<<strcat(s1,s2);
		}
};
int main(){
	char str1[]="Watashi Wa ";
	char str2[]="Shinitai";
	
	Concatenator c1(str1,str2);
	
	+c1;
	return 0;
	
	
}
