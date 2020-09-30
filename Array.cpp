/*#include<iostream>
using namespace std;
int main()
{
	int age[10], a = 10;
	cout << sizeof(age)<<endl;
	cout << sizeof(age[0]) <<endl;
	cout << age << endl;
	cout << &a << endl;
	return 0;
}
*/


/*#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{	int a[5];
	string name[5];
	for(int x = 0; x<5 ; x++)
	{	cout << "Enter name  ["<<x+1<<"] : ";
		cin >> name[x];
		cout << "Enter score ["<<x+1<<"] : ";
		cin >> a[x];
	}
	cout << endl;
	cout << "Show all value" << endl;
	cout << "No." << setw(15) << setfill(' ') << "Name" << setw(15) << setfill(' ') << "Score" << endl;
	cout << setw(40) << setfill('-') << " " << endl;
	for (int x = 0; x<5; x++)
	{
		cout << x+1 << setw(15) << setfill(' ') << name[x] << setw(15) << setfill(' ') << a[x] << endl;
	}
	return 0;
}
*/


/*#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int num;
	cout << "Enter number of student : ";
	cin >> num;
	int *a = new int[num]; // dynamic array
	string *name = new string[num];  // dynamic array
	for(int x = 0; x<num ; x++)
	{	cout << "Enter name  ["<<x+1<<"] : ";
		cin >> name[x];
		cout << "Enter score ["<<x+1<<"] : ";
		cin >> a[x];
	}
	cout << "Show all value" << endl;
	cout << "No." << setw(15) << setfill(' ') << "Name" << setw(15) << setfill(' ') << "Score" << endl;
	cout << setw(40) << setfill('-') << " " << endl;
	for(int x = 0; x<num ; x++)
	{
		cout << x+1 << setw(15) << setfill(' ') << name[x] << setw(15) << setfill(' ') << a[x] << endl;
	}
	return 0;
}
*/


/*#include <iostream>
using namespace std;
int main()
{
	int a[4] = {-1, 6, 9, 2};
	int max = a[0], sum = 0;
	int min = a[0];
	for(int i = 1; i < 4; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		sum += a[i];
	}
	
	cout << "Maximum value is " << max << endl;
	cout << "Minimum value is " << min << endl;
	cout << "Sum = " << sum << endl;
	return 0;
}
*/