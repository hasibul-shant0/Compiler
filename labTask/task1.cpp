#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//1
bool isNumericConstant(string input) {
    for (char c : input)
        if (!isdigit(c))
            return false;
    return true;
}

// 2
void detectOperators(string input) {
    string ops = "+-*/%=";
    bool found = false;
    for (char c : input) {
        if (ops.find(c) != string::npos) {
            cout << "Operator found: " << c << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No operator found" << endl;
}

//3
void checkComment(string line) {
    if (line.find("//") == 0)
        cout << "Single line comment" << endl;
    else if (line.find("/*") == 0 && line.rfind("*/") == line.length() - 2)
        cout << "Multiple line comment" << endl;
    else
        cout << "Not a comment" << endl;
}

//4
bool isIdentifier(string input) {
    if (!(isalpha(input[0]) || input[0] == '_'))
        return false;
    for (int i = 1; i < input.length(); i++)
        if ((!isalnum(input[i]) && input[i] != '_') || input[i] == ' ')
            return false;
    return true;
}

//5
double findAverage(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

//6
void findMinMax(int arr[], int n, int &minVal, int &maxVal) {
    minVal = maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

// 7
string fullName(string first, string last) {
    return first + " " + last;
}

int main() {
    int choice;
    do {
        cout << "1. Check Numeric Constant" << endl;
        cout << "2. Detect Operators" << endl;
        cout << "3. Check Comment Line" << endl;
        cout << "4. Check Identifier" << endl;
        cout << "5. Find Average of Array" << endl;
        cout << "6. Find Min and Max of Array" << endl;
        cout << "7. Concatenate Full Name" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // clear buffer

        switch (choice) {
            case 1: {
                string input;
                cout << "Enter something: ";
                cin >> input;
                if (isNumericConstant(input))
                    cout << "Numeric constant" << endl;
                else
                    cout << "Not numeric" << endl;
                break;
            }

            case 2: {
                string input;
                cout << "Enter an expression: ";
                cin >> input;
                detectOperators(input);
                break;
            }

            case 3: {
                string line;
                cout << "Enter a line: ";
                getline(cin, line);
                checkComment(line);
                break;
            }

            case 4: {
                string input;
                cout << "Enter an identifier: ";
                cin >> input;
                if (isIdentifier(input))
                    cout << "Valid identifier" << endl;
                else
                    cout << "Invalid identifier" << endl;
                break;
            }

            case 5: {
                int n;
                cout << "Enter number of elements: ";
                cin >> n;
                int arr[n];
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++) cin >> arr[i];
                cout << "Average = " << findAverage(arr, n) << endl;
                break;
            }

            case 6: {
                int n;
                cout << "Enter number of elements: ";
                cin >> n;
                int arr[n];
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++) cin >> arr[i];
                int minVal, maxVal;
                findMinMax(arr, n, minVal, maxVal);
                cout << "Minimum = " << minVal << endl;
                cout << "Maximum = " << maxVal << endl;
                break;
            }

            case 7: {
                string first, last;
                cout << "Enter first name: ";
                cin >> first;
                cout << "Enter last name: ";
                cin >> last;
                cout << "Full name = " << fullName(first, last) << endl;
                break;
            }

            case 0:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid" << endl;
        }

    } while (choice != 0);

    return 0;
}
