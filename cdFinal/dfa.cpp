#include <iostream>
using namespace std;

int main() {

    int state = 0;
    bool status = 0;
    string s;

    cin >> s;

    for (char c : s) {
        if (state == 0) {
            if (c == 'b'){ status = 0;}
            else if (c == 'a') {status = 1;}
            else {status = 0;}
            state = 1;
        }
        else if (state == 1) {
            if (c == 'a') {status = 1;}
            else if (c == 'b') {status = 0;}
            else {status = 0;}
            state =2;
        }
        else if (state == 2) {
            if (c == 'a') {status = 0;}
            else if (c == 'b') {status = 0;}
            else {status = 0;}
            state = 3;

        }
        else if (state == 3) {
            if (c == 'a') {status = 0;}
            else if (c == 'b') {status = 0;}
            else {status = 0;}
            state =4;
        }
        else if (state == 4) {
            if (c == 'a') {status = 1;}
            else if (c == 'b') {status = 1;}
            else {status = 0;}
            state = 5;
        }
        else if (state == 5) {
            if (c == 'a') {status = 0;}
            else if (c == 'b') {status = 0;}
            else {status = 0;}
        }
        else {
            status = 0;
        }
    }

    if (status == 1 )
        cout << "Accepted\n";
    else
        cout << "Rejected\n";

    return 0;
}
