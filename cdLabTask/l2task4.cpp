#include <iostream>
#include <string>
using namespace std;

bool isIdentifier(string input) {
    if (!(isalpha(input[0]) || input[0] == '_'))
        return false;

    for (int i = 1; i < input.length(); i++)
        if (!isalnum(input[i]) && input[i] != '_')
            return false;

    return true;
}

int main() {
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    if (isIdentifier(input))
        cout << "Valid identifier" << endl;
    else
        cout << "Invalid identifier" << endl;

    return 0;
}
