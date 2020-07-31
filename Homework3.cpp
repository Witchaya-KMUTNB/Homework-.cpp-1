#include<iostream>
using namespace std;
int main()
{
	int q1, q2, q3, mid, final;
	float total_q, total;
	cout<<"============QUIZZESS============"<<endl;
	cout<<"Enter first quizz (10) : ";
	cin>>q1;
	cout<<"Enter second quizz (10) : ";
	cin>>q2;
	cout<<"Enter third quizz (10) : ";
	cin>>q3;
	cout<<"============MID-TERM============"<<endl;
	cout<<"Enter mid-term (40) : ";
	cin>>mid;
	cout<<"============FINAL========"<<endl;
	cout<<"Enter mid-term (50) : ";
	cin>>final;
	cout<<"Total_q : ";

	total_q = (q1 + q2 + q3) / 3.0;
	cout<<"Quizz Total : "<<total_q<<endl;
	cout<<"Mid term : "<<mid<<endl;
	cout<<"Final : "<<final<<endl;
	total = total_q + mid + final;
	cout<<"Total : "<<total<<endl;
	cout<<"Your score is "<<((total > 50) ? "PASS" : "FALL")<<endl;
	return 0;
}