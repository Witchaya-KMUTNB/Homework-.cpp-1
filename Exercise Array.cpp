#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
int quiz[10], mid[10], final[10];
int num;
int main()
{
	char choice;
	do{
	cout << "==================================" << endl;
	cout << "               MENU               " << endl;
	cout << "==================================" << endl;
	cout << "   1.Input Student Records" << endl;
	cout << "   2.View all Student Records" << endl;
	cout << "   3.Exit" << endl;
	cout << "\n";
	cout << "Select Menu : ";
	cin >> choice;
	if (choice == '1'){
		cout << "Input Number of Student : ";
		cin >> num;
		int *a = new int[num];
		for(int x = 0; x<num ; x++){
			cout << "Number "<<x+1<<" " << endl;
			cout << " Input Quiz    : ";
			cin >> quiz[x];
			cout << " Input Midterm : ";
			cin >> mid[x];
			cout << " Input Final   : ";
			cin >> final[x];
		}
	}
	else if (choice == '2'){
		cout << "-" << setw(40) << setfill(' ') << endl;
		cout << "StdID" << setw(15) << setfill(' ') << "Quiz" << setw(15) << setfill(' ') << "Midterm" << setw(15) << setfill(' ') << "Final" << endl;
		cout << "-" << setw(40) << setfill(' ') << endl;
		for(int x = 0; x<num ; x++){
			cout << x+1 << setw(15) << setfill(' ') << quiz[x] << setw(15) << setfill(' ') << mid[x] << setw(15) << setfill(' ') << final[x] << endl;
		}
	}
	else if (choice == '3'){
		cout << "Exit Program"  << endl;
	}
	else cout << "Try again" << endl;
	} while (choice != '3');
	return 0;
}