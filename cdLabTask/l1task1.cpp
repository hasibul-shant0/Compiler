#include<iostream>
using namespace std;

void numeric(string a){
    bool isNumeric = true;
    for(char c : a){
        if(!isdigit(c)){
            isNumeric = false;
            break;
        }
    }
    if(isNumeric)
        cout << a << " is a numeric string." << endl;
    else
        cout << a << " is not a numeric string." << endl;
}

int main(){
    string x;
    cout<<"Enter any string: ";
    cin>>x;
    numeric(x);

    return 0;
}