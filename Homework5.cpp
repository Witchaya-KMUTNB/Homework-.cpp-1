#include <iostream>
#include <string>
using namespace std;
int main () {
    string data;
    cout << "Input String : ";
    cin >> data;
    cout << "Reverse String : ";
    for (int i = data.length()-1; i >= 0; i--) {
        cout << (char) toupper(data[i]);
    }
    cout << endl;
    system("pause");
    return 0;
}