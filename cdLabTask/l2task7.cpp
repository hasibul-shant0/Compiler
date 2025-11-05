#include <iostream>
#include <string>
using namespace std;

void fullName(string first, string last) {
    string name = first + " " + last;
     cout << "Full name = " << name << endl;
}

int main() {
    string first, last;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    
    fullName(first, last);
  
    return 0;
}
