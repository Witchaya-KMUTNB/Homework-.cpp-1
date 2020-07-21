//Homework for week2
#include <iostream>;
#include <string>;
using namespace std;
void main()
{
	string Name;
	int Salary, Sale, Commission;
	cout<<"\**********Homework 2**********\n";
	cout<<"\Enter Name   : ";
	cin>>Name;
	cout<<"\Enter Salary : ";
	cin>>Salary;
	cout<<"\Enter Sale	 : ";
	cin>>Sale;
	cout<<"\Enter Commission Percent : ";
	cin>>Commission;
	cout<<"\------Output------\n";
	cout<<"\Your Name = "<<Name<<endl;
	cout<<"Total Revenue\t"<<Salary + (Sale * Commission) / 100 <<endl;
	system("pause");
}