#include<iostream>
#include<string>
using namespace std;

void checkComment(string line) {
    if (line.find("//"==0))
        cout<<"Single line comment" << endl;
    else if (line.find("/*") == 0 && line.rfind("*/") == line.length() - 2)
        cout<<"Multiple line comment" << endl;
    else
        cout<<"Not a comment"<<endl;
}

int main() {
    string line;
    cout<<"Enter a line: ";
    cin>>line;
    checkComment(line);
    return 0;
}
