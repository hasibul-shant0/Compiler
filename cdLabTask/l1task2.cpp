#include<iostream>
using namespace std;

void arithmetic(string a){
for(int i=0;i<a.length();i++){
    if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/'){
        cout << a << " contains arithmetic operator." << endl;
        return;
    }
}
cout << a << " does not contain any arithmetic operators." << endl;
}

int main(){
    string x;
    cout<<"Enter any string: ";
    cin>>x;
    arithmetic(x);
    return 0;
}