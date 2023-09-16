/*13. A class has five papers in one term. Write a program that will read in a student’s score in five
papers as integer and output the student’s average and grade using switch statement. 80-100
Grade A, 60-79 Grade B, 50-59 Grade C,40-49 Grade D, <40 Fail. Marks below 0 and above 100
should not be accepted.*/
#include<iostream>
using namespace std;
	int main()
	{	int subject[5];
		cout<<"Enter marks of student in 5 dubjects:\n";
		for(int i=0;i<5;i++){
			cin>>subject[i];
		}
		int sum,avg;
		sum=subject[0]+subject[1]+subject[2]+subject[3]+subject[4];
		avg=sum/5;
		switch (avg){
			case 80 ... 100:
				cout<<"Grade A";
			break;
			case 60 ... 79:
				cout<<"Grade B";
			break;
			case 50 ... 59:
				cout<<"Grade C";
			break;
			case 40 ... 49:
				cout<<"Grade D";
			break;
			case 0 ... 39:
				cout<<"Fail";
			break;
			default:
				cout<<"Marks can't be accepted.";
		}
		return 0;
	}


